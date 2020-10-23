/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** first_step
*/

#include "./../include/duo.h"

void    first_step(char **one, char **two)
{
    int n = 0;
    int line = 0;
    int len_one = my_strtab_len(one);
    int len_two = my_strtab_len(two);
    int nb_parts = len_one * len_two;

    while (one[line] != NULL) {
        n = 0;
        while (n != nb_parts) {
            my_putstr(one[line]);
            n++;
        }
        my_putchar('\n');
        line++;
    }
}

void    second_part_print(char *one, char *two, int nb)
{
    int i = 0;

    while (i != nb) {
        if ((i % 2) != 0) {
            my_putstr(two);
        } else {
            my_putstr(one);
        }
        i = i + 1;
    }
}

void    second_step(char **one, char **two)
{
    int n = 0;
    int line = 0;
    int len_one = my_strtab_len(one);

    while (one[line] != NULL) {
        while (n != len_one) {
            second_part_print(one[line], two[line], len_one);
            n = n + 1;
        }
        n = 0;
        my_putchar('\n');
        line++;
    }
}
