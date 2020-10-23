/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** check that the user send right nb of matches
*/

#include "./../include/match.h"

int check_input_matches(char *input, map_t *map, int line)
{
    int nb = 0;

    if (my_str_is_int(input) == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (0);
    }
    nb = my_getnbr(input);
    if (check_nb_matches(nb, line, map) == 0)
        return (0);
    return (nb);
}
