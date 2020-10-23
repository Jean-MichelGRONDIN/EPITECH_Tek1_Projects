/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** get the arg of an opt
*/

#include "./../include/tetris.h"

char    *is_stic_to_the_opt(char **av)
{
    char    *new = NULL;
    char    **tab = NULL;

    tab = my_str_to_word_array(av[optind], "=");
    if (my_strtab_len(tab) == 2)
        new = my_strdup(tab[1]);
    tab = free_cleanly_str_tab(tab);
    return (new);
}

char    *get_opt_args(char  **av)
{
    char    *new = NULL;

    if (av[optind] == NULL)
        return (NULL);
    new = is_stic_to_the_opt(av);
    if (my_is_in('=', av[optind]) == 1)
        return (new);
    optind += 1;
    return (my_strdup(av[optind]));
}