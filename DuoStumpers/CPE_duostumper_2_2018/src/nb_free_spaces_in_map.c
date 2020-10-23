/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** return the nb of free_spaces in the map
*/

#include "./../include/stumper.h"

int nb_free_spaces_on_this_line(char *str)
{
    int nb = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '.')
            nb = nb + 1;
        i = i + 1;
    }
    return (nb);
}

int nb_free_spaces_in_map(char **map)
{
    int nb = 0;
    int i = 0;

    while (map[i] != NULL) {
        nb = nb + nb_free_spaces_on_this_line(map[i]);
        i = i + 1;
    }
    return (nb);
}
