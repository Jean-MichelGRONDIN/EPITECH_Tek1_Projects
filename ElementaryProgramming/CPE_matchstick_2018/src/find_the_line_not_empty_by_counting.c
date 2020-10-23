/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** find the line not empty by counting the nb of line not empty
*/

#include "./../include/match.h"

int find_the_line_not_empty_by_counting(map_t *map, int line)
{
    int i = 0;
    int nb = 0;

    while (i != (map->nb_line + 2) && nb != line) {
        if (map->nb_sticks[i] != 0) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (i - 1);
}
