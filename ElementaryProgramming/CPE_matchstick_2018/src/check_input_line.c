/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** check that the user send right nb of line
*/

#include "./../include/match.h"

int check_input_line(char *input, map_t *map)
{
    int nb = 0;

    if (my_str_is_int(input) == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (0);
    }
    nb = my_getnbr(input);
    if (nb < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (0);
    }
    if (nb == 0 || nb > map->nb_line) {
        my_putstr("Error: this line is out of range\n");
        return (0);
    }
    return (nb);
}
