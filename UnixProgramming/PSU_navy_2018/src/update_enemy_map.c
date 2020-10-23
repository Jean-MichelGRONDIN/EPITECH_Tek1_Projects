/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** update my enemy map from answer i got
*/

#include "./../include/navy.h"

char    **update_enemy_map(char **map, char *data, int res)
{
    int y = data[1];
    int x = data[0];

    if (res == 1 && map[y - 1][x] == '.')
        map[y - 1][x] = 'o';
    else if (res == 2)
        map[y - 1][x] = 'x';
    return (map);
}
