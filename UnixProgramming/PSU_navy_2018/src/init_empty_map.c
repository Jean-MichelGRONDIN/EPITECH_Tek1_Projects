/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** init an empty map ( with only dots )
*/

#include "./../include/navy.h"

char    **init_empty_map(void)
{
    char    **map = malloc(sizeof(char *) * (8 + 1));
    int i = 0;

    while (i != 8) {
        map[i] = malloc(sizeof(char) * (8 + 1));
        map[i] = my_memset(map[i], '.', 8);
        map[i][8] = '\0';
        i = i + 1;
    }
    map[8] = NULL;
    return (map);
}
