/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** set somethign in env
*/

#include "./../include/minishell.h"

char    **my_set_env(st_t st)
{
    int nb_args = my_strtab_len(st.args);
    char    *tmp = NULL;
    char    *finale = NULL;

    if (nb_args > 3) {
        my_pstrerr("setenv: Too many arguments.\n");
        return (st.env);
    }
    if (nb_args == 1)
        return (print_env(st));
    if (check_setenv_obj_name_syntax(st.args[1]) == 1)
        return (st.env);
    if (nb_args == 2)
        finale = my_assemble_str(st.args[1], "=");
    if (nb_args == 3) {
        tmp = my_assemble_str(st.args[1], "=");
        finale = my_assemble_str(tmp, st.args[2]);
        free_cleanly_this_str(tmp);
    }
    return (already_exist_or_new(st, finale));
}
