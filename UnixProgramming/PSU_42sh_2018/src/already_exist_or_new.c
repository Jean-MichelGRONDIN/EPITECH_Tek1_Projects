/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** do this already exist in the env or it is new
*/

#include "./../include/minishell.h"

char    **already_exist_or_new(st_t st, char *obj)
{
    int pos = -1;

    if ((pos = find_position_of_that_in_env(st.env, st.args[1])) >= 0) {
        st.env[pos] = my_strdup(obj);
        free_cleanly_this_str(obj);
        return (st.env);
    }
    st.env = add_this_to_the_env(st, obj);
    free_cleanly_this_str(obj);
    return (st.env);
}
