/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** modify the map
*/

#include "./../include/match.h"

map_t   *modify_the_map(input_t *input, map_t *w)
{
    if (input != NULL) {
        w->nb_sticks[input->rows] = w->nb_sticks[input->rows] - input->nb;
    }
    return (w);
}
