/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** do pipes and redirections of differentes commandes
*/

#include "./../include/minishell.h"

char    **do_command_redirections_pt_redirections(st_t st,
    char **tab, char *redirection)
{
    if (redirection[0] == '|')
        st.env = check_simple_pipe_redirection(st, tab, redirection);
    else if (redirection[0] == '&')
        st.env = check_and_redirection(st, tab, redirection);
    else if (redirection[0] == '<' || redirection[0] == '>')
        st.env = check_redirections_syntax(st, tab, redirection);
    return (st.env);
}

char    **do_commandes_redirections(st_t st, char *str)
{
    int i = count_until_line_finisher(str, "><|&");
    int next = count_until_not_line_finisher(&(str[i]), "<>|&");
    char    *redirection = my_strndup(&(str[i]), next);
    char    **tab = my_str_to_word_array(str, "<>|&");

    if (check_this_tab(tab) == -1)
        return (st.env);
    if (my_strtab_len(tab) > 2)
        my_printf("Error multiple redirection are not supported !\n");
    else if (my_strtab_len(tab) == 2)
        do_command_redirections_pt_redirections(st, tab, redirection);
    else
        st.env = identify_the_input(st, tab[0]);
    redirection = free_cleanly_this_str(redirection);
    tab = free_cleanly_str_tab(tab);
    return (st.env);
}
