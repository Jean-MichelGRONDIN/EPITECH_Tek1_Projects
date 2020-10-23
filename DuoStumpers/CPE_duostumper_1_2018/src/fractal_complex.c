/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** fractal complex method
*/

#include "./../include/duo.h"

void    part_one(char **one, char **two, int nb)
{
    int i = 0;

    while (i != nb) {
        if ((i % 2) != 0) {
            second_step(one, two);
        } else {
            first_step(one, two);
        }
        i = i + 1;
    }
}

void    part_two(char **one, char **two, int nb)
{
    int i = 0;

    while (i != nb) {
        if ((i % 2) != 0) {
            part_two_step_two(one, two);
        } else {
            step_one_part_two(one, two);
        }
        i = i + 1;
    }
}

void    fractal_complex(char **av)
{
    char **one = my_str_to_word_array(av[2], "@");
    char **two = my_str_to_word_array(av[3], "@");
    int nb = my_strtab_len(one);
    int i = 0;

    while (i != nb) {
        if ((i % 2) != 0) {
            part_two(one, two, nb);
        } else {
            part_one(one, two, nb);
        }
        i = i + 1;
    }
    one = free_cleanly_str_tab(one);
    two = free_cleanly_str_tab(two);
}
