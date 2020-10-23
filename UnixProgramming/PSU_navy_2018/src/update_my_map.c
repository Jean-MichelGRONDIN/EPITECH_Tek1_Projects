/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** update the map with enemy action
*/

#include "./../include/navy.h"

char    **update_my_map(char **map, char *data)
{
    int y = data[1];
    int x = data[0];

    if (map[y - 1][x] == '.')
        map[y - 1][x] = 'o';
    else if (map[y - 1][x] >= '2' && map[y - 1][x] <= '5')
        map[y - 1][x] = 'x';
    return (map);
}
