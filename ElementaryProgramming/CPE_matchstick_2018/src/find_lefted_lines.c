/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** find nb line with one match or more
*/

#include "./../include/match.h"

int find_lefted_lines(map_t *map)
{
    int i = 0;
    int nb = 0;

    while (i != (map->nb_line + 2)) {
        if (map->nb_sticks[i] != 0) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}
