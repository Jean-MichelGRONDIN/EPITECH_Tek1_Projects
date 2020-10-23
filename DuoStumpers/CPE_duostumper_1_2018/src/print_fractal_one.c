/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** do the fractal one
*/

#include "./../include/duo.h"

void    print_fractal_one(char *one)
{
    int i = 0;

    while (one[i] != '\0') {
        if (one[i] == '@')
            my_putchar('\n');
        else
            my_putchar(one[i]);
        i = i + 1;
    }
    my_putchar('\n');
}
