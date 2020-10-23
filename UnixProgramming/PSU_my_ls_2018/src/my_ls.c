/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** first function of the prog
*/

#include "./../include/my_ls.h"

int my_ls(int ac, char **av)
{
    if (ac >= 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            my_putstr("Here will soon be a usage !\n");
            return (0);
        }
        return (flags_finder(av));
    }
    if (ac == 1) {
        basic(my_strdup("./"));
    }
    return (0);
}
