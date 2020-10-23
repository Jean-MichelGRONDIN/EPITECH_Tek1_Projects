/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** return to the last path where we were before this one
*/

#include "./../include/minishell.h"

char    **cd_return_in_past(st_t st)
{
    char    **old_pwd = NULL;
    int old_pwd_pos = find_position_of_that_in_env(st.env, "OLDPWD");
    int old_pwd_len = -1;

    if (old_pwd_pos != -1) {
        old_pwd = my_str_to_word_array(st.env[old_pwd_pos], "=");
        old_pwd_len = my_strtab_len(old_pwd);
        if (old_pwd_len == 2)
            st.env = try_go_in_this_path(st, old_pwd[1]);
        free_cleanly_str_tab(old_pwd);
    }
    return (st.env);
}
