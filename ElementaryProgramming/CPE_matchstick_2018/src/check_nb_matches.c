/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** check that the nb of maches is allowed
*/

#include "./../include/match.h"

int check_nb_matches(int nb, int line, map_t *map)
{
    if (nb < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (0);
    }
    if (nb == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (0);
    }
    if (map->nb_sticks[line] < nb) {
        my_putstr("Error: not enough matches on this line\n");
        return (0);
    }
    if (nb > map->remove_max) {
        my_putstr("");
        return (0);
    }
    return (nb);
}
