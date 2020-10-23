/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** function that take an obj in params and send it in the set env fucntion
*/

#include "./../include/minishell.h"

char    **put_that_in_env(st_t st, char *obj, char *str)
{
    char    *tmp = my_assemble_str(obj, " ");
    char    *finale = my_assemble_str(tmp, str);

    tmp = my_assemble_str("setenv ", finale);
    st.args = my_str_to_word_array(tmp, " \t");
    finale = free_cleanly_this_str(finale);
    tmp = free_cleanly_this_str(tmp);
    st.env = my_set_env(st);
    return (st.env);
}
