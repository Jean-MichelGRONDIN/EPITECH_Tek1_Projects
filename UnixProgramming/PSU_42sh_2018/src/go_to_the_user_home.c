/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** put the path to the home of the user
*/

#include "./../include/minishell.h"
//si HOME a était rm
char    **go_to_the_user_home(st_t st)
{
    int pos = find_position_of_that_in_env(st.env, "HOME");
    char    **home = NULL;
    int len = 0;

    if (pos != -1) {
        home = my_str_to_word_array(st.env[pos], "=");
        len = my_strtab_len(home);
        if (len == 2) {
            st.env = try_go_in_this_path(st, home[1]);
        } else
            return (st.env);
    }
    return (st.env);
}
