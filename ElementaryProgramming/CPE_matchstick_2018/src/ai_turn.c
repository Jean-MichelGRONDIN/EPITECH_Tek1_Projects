/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** ai turn (basically random)
*/

#include "./../include/match.h"

input_t    *ai_turn(input_t *input, map_t *map)
{
    int check = 0;
    int nb_line_left = 0;

    my_putstr("\nAI's turn...\n");
    while (check != 2) {
        nb_line_left = find_lefted_lines(map);
        if (nb_line_left > 1)
            input->rows = nb_alea(1, nb_line_left);
        else
            input->rows = 1;
        input->rows = find_the_line_not_empty_by_counting(map, input->rows);
        input->nb = nb_alea(1, map->nb_sticks[input->rows]);
        if (input->nb > 0 && input->nb <= map->remove_max
            && input->nb <= map->nb_sticks[input->rows]) {
            check = 2;
        }
    }
    return (input);
}
