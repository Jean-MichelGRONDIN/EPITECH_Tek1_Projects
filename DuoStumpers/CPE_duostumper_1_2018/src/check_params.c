/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** check that params are valid
*/

#include "./../include/duo.h"

int check_params(char **av)
{
    if (check_strings_chars(av) == 1)
        return (1);
    return (0);
}
