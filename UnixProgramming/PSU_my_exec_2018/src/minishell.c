/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** first function called
*/

#include "./../include/minishell.h"

void    print_basic_informations(char **args)
{
    int i = 0;

    my_putstr("Program name: ");
    my_putstr(args[0]);
    my_putchar('\n');
    while (args[i] != 0) {
        i = i + 1;
    }
    my_putstr("Nb args: ");
    my_put_nbr(i - 1);
    my_putchar('\n');
}

int minishell(int ac, char **av, char **env)
{
    pid_t   status = fork();
    char    **args = NULL;
    /* int i = 0; */

    if (ac != 2) {
        write(2, "Wrong number of arguments !\n", 28);
        return (84);
    }
    if (status == 0) {
        args = my_str_to_word_array(av[1]);
        print_basic_informations(args);
        execve(args[0], args, env);
    }
    wait(NULL);
    /* while (args[i] != NULL) { */
    /*     printf("%s\n", args[i]); */
    /*     i = i + 1; */
    /* } */
    return (0);
}
