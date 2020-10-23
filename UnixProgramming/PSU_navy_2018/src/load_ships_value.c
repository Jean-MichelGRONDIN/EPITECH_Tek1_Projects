/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** return int a string ships value from the file
*/

#include "./../include/navy.h"

char    *load_ships_value(char **map)
{
    int i = 0;
    char    *str = malloc(sizeof(char) * (4 + 1));
    char    *value = NULL;

    str[4] = '\0';
    while (i != 4) {
        value = my_strndup(map[i], 1);
        str[i] = my_getnbr(value);
        value = free_cleanly_this_str(value);
        i = i + 1;
    }
    return (str);
}
