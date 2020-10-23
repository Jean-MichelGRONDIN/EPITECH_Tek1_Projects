/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** print n time a char c given as arg
*/

#include "./../include/match.h"

void    print_n_time_this_char(int n, char c)
{
    int i  = 0;

    while (i != n) {
        my_putchar(c);
        i = i + 1;
    }
}
