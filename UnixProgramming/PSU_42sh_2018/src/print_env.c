/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** print the environment
*/

#include "./../include/minishell.h"

char    **print_env(st_t st)
{
    int nb_args = my_strtab_len(st.args);
    int i = 0;

    if (nb_args >= 2) {
        my_pstrerr("env: \'");
        my_pstrerr(st.args[1]);
        my_pstrerr("\': No such file or directory\n");
        return (st.env);
    }
    while (st.env[i] != NULL) {
        my_putstr(st.env[i]);
        my_putchar('\n');
        i = i + 1;
    }
    return (st.env);
}
