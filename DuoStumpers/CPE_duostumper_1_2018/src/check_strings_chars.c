/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** check chars of thr arguments strings
*/

#include "./../include/duo.h"

int check_that_string_chars(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '.' && str[i] != '#' && str[i] != '@')
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_strings_chars(char **av)
{
    if (check_that_string_chars(av[2]) == 1) {
        my_pstrerr("Error wrong character(s) detected in chain 1 !\n");
        return (1);
    }
    if (check_that_string_chars(av[3]) == 1) {
        my_pstrerr("Error wrong character(s) detected in chain 2 !\n");
        return (1);
    }
    return (0);
}
