/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** separate all commands and launch them one at time
*/

#include "./../include/minishell.h"
//        env = do_commandes(env, tab[i]);
char    **separate_all_commands(char **env, char *str)
{
    int i = 0;
    char **tab;

    if (check_if_nothing_in_the_str_v2(str) == 0) {
        my_putstr("Invalid null command.\n");
        return (env);
    }
    tab = my_str_to_word_array(str, ";");
    while (tab[i] != NULL) {
        env = do_commandes_redirections(env, tab[i]);
        i = i + 1;
    }
    tab = free_cleanly_str_tab(tab);
    return (env);
}
