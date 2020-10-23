/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** do pipes and redirections of differentes commandes
*/

#include "./../include/minishell.h"

char    **do_commandes_redirections(char **env, char *str)
{
    int i = count_until_line_finisher(str, "><|");
    int next = count_until_not_line_finisher(&(str[i]), "<>|");
    char    *redirection = my_strndup(&(str[i]), next);
    char    **tab = my_str_to_word_array(str, "<>|");

    if (my_strtab_len(tab) > 2)
        my_printf("Error multiple redirection are not supported !\n");
    else if (my_strtab_len(tab) == 2)
        if (redirection[0] == '|')
            env = single_pipe_redirection(env, tab, redirection);
        else
            env = check_redirections_syntax(env, tab, redirection);
    else
        env = identify_the_input(env, tab[0]);
    redirection = free_cleanly_this_str(redirection);
    tab = free_cleanly_str_tab(tab);
    return (env);
}
