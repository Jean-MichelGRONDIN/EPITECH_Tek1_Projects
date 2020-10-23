/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** unset somethign from the env
*/

#include "./../include/minishell.h"

char    **my_unset_env(st_t st)
{
    int nb_args = my_strtab_len(st.args);
    int i = 1;
    int nb = 0;

    if (nb_args == 1)
        my_pstrerr("unsetenv: Too few arguments.\n");
    while (st.args[i] != NULL) {
        st.env = remove_this_from_the_env(st, st.args[i], &nb);
        i = i + 1;
    }
    if (nb > 0)
        st.env = copy_the_env_after_unset(st, nb);
    return (st.env);
}
