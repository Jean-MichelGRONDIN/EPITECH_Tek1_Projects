/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** say if someone lose/win
*/

#include "./../include/navy.h"

int count_x_on_that_line(char *str)
{
    int i = 0;
    int nb_x = 0;

    while (str[i] != '\0') {
        if (str[i] == 'x')
            nb_x = nb_x + 1;
        i++;
    }
    return (nb_x);
}

int is_this_map_over(char **map)
{
    int i = 0;
    int nb_x = 0;

    while (map[i] != NULL) {
        nb_x = nb_x + count_x_on_that_line(map[i]);
        i++;
    }
    return (nb_x);
}

int is_this_the_end(char **map, char **enemy)
{
    if (enemy == NULL)
        return (0);
    if (is_this_map_over(map) == 14) {
        print_maps(map, enemy);
        my_putstr("\nEnemy won\n");
        return (1);
    }
    if (is_this_map_over(enemy) == 14) {
        print_maps(map, enemy);
        my_putstr("\nI won\n");
        return (0);
    }
    return (-1);
}
