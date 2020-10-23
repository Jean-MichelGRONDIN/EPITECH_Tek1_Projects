/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** deplace the user in files
*/

#include "./../include/minishell.h"
// quand y'a des '~'
char    **my_cd(st_t st)
{
    int nb_args = my_strtab_len(st.args);

    if (nb_args > 2) {
        my_pstrerr("cd: Too many arguments.\n");
        return (st.env);
    }
    if (nb_args == 1) {
        st.env = go_to_the_user_home(st);
    }
    if (nb_args == 2) {
        if (my_strcmp(st.args[1], "-") == 0)
            st.env = cd_return_in_past(st);
        else if (my_strcmp(st.args[1], "--") == 0)
            st.env = go_to_the_user_home(st);
        else
            st.env = try_go_in_this_path(st, st.args[1]);
    }
    return (st.env);
}
