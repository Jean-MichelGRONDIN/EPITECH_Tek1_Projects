/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** initialise variables needed
*/

#include "./../include/minishell.h"

int initialise(char **env)
{
    st_t st;
    char    *str = NULL;

    st.env = copy_the_env(env);
    st.pwd = give_me_this_in_env(st.env, "PWD");
    while (1) {
        free_cleanly_this_str(str);
        str = get_input();
        if (str == NULL)
            return (0);
        if (check_if_nothing_in_the_str(str) == 1)
            st.env = separate_all_commands(st, str);
    }
    return (0);
}
