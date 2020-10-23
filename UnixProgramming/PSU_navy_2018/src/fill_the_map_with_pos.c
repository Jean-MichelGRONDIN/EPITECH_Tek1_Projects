/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** fill an empty map with ships thanks to positions
*/

#include "./../include/navy.h"

char    **fill_the_map_with_pos(char **map, char **pos)
{
    int i = 0;
    char    **ship = NULL;

    while (map != NULL && pos[i] != NULL) {
        ship = my_str_to_word_array(pos[i], ":");
        map = place_that_ship(map, ship);
        ship = free_cleanly_str_tab(ship);
        i = i + 1;
    }
    return (map);
}
