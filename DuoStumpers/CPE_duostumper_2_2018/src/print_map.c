/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** print the game map
*/

#include "./../include/stumper.h"

void    print_n_time_this_char(char c, int n)
{
    int i = 0;

    while (i != n) {
        my_putchar(c);
        i = i + 1;
    }
}

void    print_n_time_this_str(char *str, int n)
{
    int i = 0;

    while (i != n) {
        my_putstr(str);
        i = i + 1;
    }
}

void    print_map(char **map, int width)
{
    int i = 0;

    print_n_time_this_char('+', width + 2);
    my_putchar('\n');
    while (map[i] != NULL) {
        my_putchar('|');
        my_putstr(map[i]);
        my_putchar('|');
        my_putchar('\n');
        i = i + 1;
    }
    print_n_time_this_char('+', width + 2);
    my_putchar('\n');
}
