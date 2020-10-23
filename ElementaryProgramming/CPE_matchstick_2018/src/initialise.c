/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** intialise var from arg
*/

#include "./../include/match.h"

int initialise(char **av)
{
    map_t   *map = malloc(sizeof(*map));

    map->nb_line = my_getnbr(av[1]);
    map->remove_max = my_getnbr(av[2]);
    map->nb_sticks = NULL;
    if (map->remove_max < 1) {
        write(2, "The number of max removable stick must be > 0 !\n", 48);
        return (84);
    }
    if (map->nb_line < 2 || map->nb_line > 99) {
        write(2, "The number of line must be between 1 and 100", 44);
        return (84);
    }
    map->nb_sticks = init_nb_sticks_by_line(map->nb_line);
    display_game_board(map->nb_line, map->nb_sticks);
    return (game_loop(map));
}
