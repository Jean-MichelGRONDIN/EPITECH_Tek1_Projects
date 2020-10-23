/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check map errors
*/

#include "./../include/navy.h"

int check_simple_map_errors(char **map, char **line)
{
    if (check_map_invalid_pos(line) != 0)
        return (1);
    if (check_map_invalid_ship_number(map))
        return (1);
    return (0);
}

int map_errors(char **map)
{
    int i = 0;
    char    **line = NULL;

    if (map == NULL)
        return (1);
    while (map[i] != NULL) {
        line = my_str_to_word_array(map[i], ":");
        if (check_simple_map_errors(map, line) != 0) {
            line = free_cleanly_str_tab(line);
            return (1);
        }
        i = i + 1;
        line = free_cleanly_str_tab(line);
    }
    return (0);
}
