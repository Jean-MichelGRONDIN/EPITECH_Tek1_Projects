/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** part two steps
*/

#include "./../include/duo.h"

void    print_n_time_this_str(char *str, int n)
{
    int i = 0;

    while (i != n) {
        my_putstr(str);
        i = i + 1;
    }
}

void    first_part_print(char *one, char *two, int nb)
{
    int i = 0;

    while (i != nb) {
        if ((i % 2) != 0) {
            print_n_time_this_str(two, nb);
        } else {
            print_n_time_this_str(one, nb);
        }
        i = i + 1;
    }
}

void    step_one_part_two(char **one, char **two)
{
    int line = 0;
    int len_one = my_strtab_len(one);

    while (one[line] != NULL) {
        first_part_print(one[line], two[line], len_one);
        my_putchar('\n');
        line++;
    }
}

void    part_two_step_two_loop(char *one, char *two, int nb)
{
    int i = 0;

    while (i != nb) {
        if ((i % 2) != 0) {
            print_n_time_this_str(two, nb);
        } else {
            second_part_print(one, two, nb);
        }
        i = i + 1;
    }
}

void    part_two_step_two(char **one, char **two)
{
    int line = 0;
    int len_one = my_strtab_len(one);

    while (one[line] != NULL) {
        part_two_step_two_loop(one[line], two[line], len_one);
        my_putchar('\n');
        line++;
    }
}
