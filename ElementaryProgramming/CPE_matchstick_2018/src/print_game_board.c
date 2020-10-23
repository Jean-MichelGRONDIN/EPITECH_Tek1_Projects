/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** print the game board
*/

#include "./../include/match.h"

void    print_this_line(int nb_places, int line, int nb_stick)
{
    int nb_supposed_sticks = line + (line - 1);
    int nb_spaces = (nb_places - nb_supposed_sticks) / 2;
    int i = 0;

    my_putchar('*');
    print_n_time_this_char(nb_spaces, ' ');
    while (i != nb_supposed_sticks) {
        if (i < nb_stick) {
            my_putchar('|');
        } else {
            my_putchar(' ');
        }
        i = i + 1;
    }
    print_n_time_this_char(nb_spaces, ' ');
    my_putstr("*\n");
}

void    display_game_board(int nb_line, char *sticks_by_line)
{
    int i = 1;
    int nb_stars = nb_line + (nb_line + 1);

    print_n_time_this_char(nb_stars, '*');
    my_putchar('\n');
    while (i <= nb_line) {
        print_this_line((nb_stars - 2), i, sticks_by_line[i]);
        i = i + 1;
    }
    print_n_time_this_char(nb_stars, '*');
    my_putstr("\n");
}
