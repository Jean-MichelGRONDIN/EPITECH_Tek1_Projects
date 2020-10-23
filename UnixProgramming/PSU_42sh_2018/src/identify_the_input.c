/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** identify the input or returned an error msg
*/

#include "./../include/minishell.h"

int identify_the_input_pipe(st_t st, char *input)
{
    int ret = -1;

    if (my_strcmp(input, "\n") == 0)
        return (0);
    st.args = my_str_to_word_array(input, " \t");
    st.args = args_changing(st);
    if (is_this_in_my_aliases(&st) != 0 && my_strcmp(input, "") == 2)
        return (0);
    if (is_this_one_of_my_commands(st) != 0) {
        do_my_command(st);
        return (0);
    }
    if ((ret = init_path_before_launch_researsh_pipe(st)) > 0)
        return (ret);
    my_pstrerr(st.args[0]);
    my_pstrerr(": Command not found.\n");
    st.args = free_cleanly_str_tab(st.args);
    return (-1);
}

char    **identify_the_input(st_t st, char *input)
{
    if (my_strcmp(input, "\n") == 0)
        return (st.env);
    st.args = my_str_to_word_array(input, " \t");
    st.args = args_changing(st);
    if (is_this_in_my_aliases(&st) != 0 && my_strcmp(input, "") == 2)
        return (st.env);
    if (is_this_one_of_my_commands(st) != 0)
        return (do_my_command(st));
    if (init_path_before_launch_researsh(st) == 1)
        return (st.env);
    my_pstrerr(st.args[0]);
    my_pstrerr(": Command not found.\n");
    st.args = free_cleanly_str_tab(st.args);
    return (st.env);
}
