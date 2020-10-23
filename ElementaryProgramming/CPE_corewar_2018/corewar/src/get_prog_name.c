/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** get_prog_name
*/

#include "../../include/corewar/corewar.h"

char    *get_next_prog_name(int ac, char **av, int *index)
{
    char    *new = NULL;

    if (*index >= ac)
        return (NULL);
    new = my_strdup(av[*index]);
    return (new);
}