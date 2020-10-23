/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check if the hit touched an ship or miss
*/

#include "./../include/navy.h"

int check_if_touched(char **map, char *data)
{
    int res = 0;
    int y = data[1];
    int x = data[0];
    int re_letter = y == 1 ? 64 : 65;

    my_printf("[%i][%i]\n", x, y);
    if (map[y - 1][x] == '.' || map[y - 1][x] == 'o' ||
        map[y - 1][x] == 'x') {
        my_printf("%c%c: missed\n", (x + re_letter), (y + 48));
        res = -1;
    } else {
        my_printf("%c%c: hit\n", (x + re_letter), (y + 48));
        res = 1;
    }
    return (res);
}
