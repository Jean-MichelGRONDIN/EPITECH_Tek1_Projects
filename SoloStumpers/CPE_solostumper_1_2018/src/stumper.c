/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** first function called
*/

#include "./../include/stumper.h"

int stumper(int ac, char **av)
{
    if (ac > 2) {
        return (84);
    }
    if (ac == 1) {
        printf("\n");
        return (0);
    }
    count_words(av[1]);
    return (0);
}
