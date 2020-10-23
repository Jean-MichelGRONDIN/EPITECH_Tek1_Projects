/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** place the ship thank to position passed as argument
*/

#include "./../include/navy.h"

char    **place_line(char **map, ship_pos_t *pos)
{
    int x = pos->a - 65;
    int x_max = pos->b - 65;
    int y = pos->line - 48 - 1;

    while (x <= x_max) {
        if (map[y][x] != '.') {
            my_pstrerr("Error ship collision detected !\n");
            map = free_cleanly_str_tab(map);
            return (map);
        } else
            map[y][x] = pos->number + 48;
        x = x + 1;
    }
    return (map);
}

char    **place_column(char **map, ship_pos_t *pos)
{
    int x = pos->line - 65;
    int y = pos->a - 48 - 1;
    int y_max = pos->b - 48 - 1;

    while (y <= y_max) {
        if (map[y][x] != '.') {
            my_pstrerr("Error ship collision detected !\n");
            map = free_cleanly_str_tab(map);
            return (map);
        } else
            map[y][x] = pos->number + 48;
        y = y + 1;
    }
    return (map);
}

char    **place_ship(char **map, ship_pos_t *pos)
{
    if ((pos->b - (pos->a - 1)) != pos->number) {
        my_pstrerr("Error wrong size of ship !\n");
        map = free_cleanly_str_tab(map);
        return (map);
    }
    if (pos->line >= 'A')
        map = place_column(map, pos);
    else
        map = place_line(map, pos);
    return (map);
}

char    **place_that_ship(char **map, char **ship)
{
    ship_pos_t  *pos = malloc(sizeof(*pos));

    pos->number = my_getnbr(ship[0]);
    if (ship[1][0] == ship[2][0]) {
        pos->a = ship[1][1] < ship[2][1] ? ship[1][1] : ship[2][1];
        pos->b = ship[1][1] > ship[2][1] ? ship[1][1] : ship[2][1];
        pos->line = ship[1][0];
    } else if (ship[1][1] == ship[2][1]) {
        pos->a = ship[1][0] < ship[2][0] ? ship[1][0] : ship[2][0];
        pos->b = ship[1][0] > ship[2][0] ? ship[1][0] : ship[2][0];
        pos->line = ship[1][1];
    } else {
        my_pstrerr("Error not straight ship detected !\n");
        map = free_cleanly_str_tab(map);
        return (map);
    }
    map = place_ship(map, pos);
    return (map);
}
