/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** redirections functions
*/

#include "./../include/minishell.h"

int file_creator_simple_redirection(char *path, int nb)
{
    int fd = -1;

    if (nb == 1)
        fd = open(path, O_CREAT|O_WRONLY|O_TRUNC, 00664);
    if (nb == 2)
        fd = open(path, O_CREAT|O_WRONLY|O_APPEND, 00664);
    if (nb == -1)
        fd = open(path, O_CREAT|O_RDONLY, 00664);
    return (fd);
}

int double_left_redirection(char *cmp)
{
    int fd[2] = {0, 0};
    char    *str = NULL;
    size_t  len = 0;
    int end = 1;

    pipe(fd);
    if (isatty(0))
        my_putstr("? ");
    while (end == 1 && getline(&str, &len, stdin) != -1) {
        if (my_strlen(str) > 1)
            str[my_strlen(str) - 1] = '\0';
        end = my_strncmp(str, cmp, my_strlen(cmp));
        write(fd[1], str, my_strlen(str));
        write(fd[1], "\n", 1);
        str = free_cleanly_this_str(str);
        if (end == 1 && isatty(0))
            my_putstr("? ");
    }
    dup2(fd[0], 0);
    close(fd[1]);
    return (fd[0]);
}

char    **do_redirections(char **env, char **cms, int n)
{
    int fd = -1;

    cms[1] = my_clear_string(cms[1], ' ', 0);
    fd = file_creator_simple_redirection(cms[1], n);
    if (n > 0) {
        dup2(fd, 1);
    } else
        if (n == -2)
            fd = double_left_redirection(cms[1]);
        else
            dup2(fd, 0);
    env = identify_the_input(env, cms[0]);
    close(fd);
    return (env);
}

char    **check_redirections_syntax(char **env, char **tab, char *str)
{
    int save_one = dup(1);
    int save_zero = dup(0);
    int nb = 0;

    if (my_strlen(str) < 1 || my_strlen(str) > 2 ||
        (my_strlen(str) == 2 && str[0] != str[1])) {
        my_printf("Missing name for redirect.\n");
        return (env);
    }
    nb = str[0] == '>' ? 1 : -1;
    nb = my_strlen(str) == 2 ? (nb * 2) : nb;
    do_redirections(env, tab, nb);
    if (str[0] == '>')
        dup2(save_one, 1);
    else
        dup2(save_zero, 0);
    return (env);
}
