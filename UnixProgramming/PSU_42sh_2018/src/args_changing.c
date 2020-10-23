/*
** EPITECH PROJECT, 2019
** args changes
** File description:
** change the args
*/

#include "./../include/minishell.h"

char **args_changing(st_t st)
{
    st.args = globals(st);
    return (st.args);
}
