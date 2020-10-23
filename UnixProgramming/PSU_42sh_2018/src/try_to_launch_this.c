/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** try to launch this file/prog
*/

#include "./../include/minishell.h"

int try_to_launch_this_pipe(char *str, st_t st)
{
    int end = 0;

    if (access(str, X_OK) == 0) {
        st.args[0] = free_cleanly_this_str(st.args[0]);
        st.args[0] = my_strdup(str);
        end += exec_this_prog_pipe(st);
    } else {
        my_pstrerr(st.args[0]);
        my_pstrerr(": Permission denied.\n");
    }
    st.args = free_cleanly_str_tab(st.args);
    str = free_cleanly_this_str(str);
    return (end);
}

int try_to_launch_this(char *str, st_t st)
{
    if (access(str, X_OK) == 0) {
        st.args[0] = free_cleanly_this_str(st.args[0]);
        st.args[0] = my_strdup(str);
        exec_this_prog(st);
    } else {
        my_pstrerr(st.args[0]);
        my_pstrerr(": Permission denied.\n");
    }
    st.args = free_cleanly_str_tab(st.args);
    str = free_cleanly_this_str(str);
    return (0);
}
