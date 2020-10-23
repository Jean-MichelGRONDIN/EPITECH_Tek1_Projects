/*
** EPITECH PROJECT, 2019
** print_maps
** File description:
** print a maps with positions : mine and ennemy s
*/

#include "./../include/navy.h"

void    check_for_spaces(char *map)
{
    int i = 0;

    while (map[i] != '\0') {
        if (i != 0)
            my_putchar(' ');
        my_putchar(map[i]);
        i++;
    }
}

void    print_this_map(char **map)
{
    int i = 0;

    my_putstr(" |A B C D E F G H\n");
    my_putstr("-+---------------\n");
    while (map[i] != NULL) {
        my_put_nbr(i + 1);
        my_putchar('|');
        check_for_spaces(map[i]);
        my_putchar('\n');
        i++;
    }
}

void    print_maps(char **map, char **enemy)
{
    my_putstr("\nmy positions:\n");
    print_this_map(map);
    my_putstr("\nenemy\'s positions:\n");
    print_this_map(enemy);
}
