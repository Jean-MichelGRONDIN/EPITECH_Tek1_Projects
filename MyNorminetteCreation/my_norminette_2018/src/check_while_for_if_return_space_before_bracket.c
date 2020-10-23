/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check that there is one space after a if, whil, for or return
*/

#include "./../include/my_norm.h"

int cmp_massique(char *str)
{
    int i = 0;
    char    **tab = malloc(sizeof(char *) * 5);
    int len = 0;

    tab[0] = my_strdup("if");
    tab[1] = my_strdup("while");
    tab[2] = my_strdup("for");
    tab[3] = my_strdup("return");
    tab[4] = NULL;
    while (tab[i] != NULL) {
        if (my_strncmp(str, tab[i], my_strlen(tab[i])) == 0) {
            len = my_strlen(tab[i]);
            tab = free_cleanly_str_tab(tab);
            return (len);
        }
        i = i + 1;
    }
    return (-1);
}

int check_that_string_call(char **tab, int line, int c)
{
    int res = -1;

    if (my_is_in(tab[line][c], "iwfr")) {
        if ((res = cmp_massique(&(tab[line][c]))) != -1)
            return (res);
    }
    return (-1);
}

int do_there_is_space_before_braket(char **tab, int line, int c)
{
    if (tab[line][c] == '(')
        return (0);
    return (1);
}

void    check_call_on_this_line(char **tab, int line, file_t *files)
{
    int i = 0;
    int res = -1;

    while (tab[line][i] != '\0') {
        if ((res = check_that_string_call(tab, line, i)) != -1)
            if ((i + res ) < my_strlen(tab[line]))
                if (do_there_is_space_before_braket(tab, line, (i + res)) == 0)
                    my_printf(COLOR_YELLOW "[%s]l.%i" COLOR_RESET
                    ": One space before braket of if/while/for(not more than one),\n",
                    files->path, (line + 1));
        i = i + 1;
    }
}

void    check_while_for_if_return_space_before_braket(char **tab, file_t *files)
{
    int i = 0;

    while (tab[i] != NULL) {
        check_call_on_this_line(tab, i, files);
        i = i + 1;
    }
}
