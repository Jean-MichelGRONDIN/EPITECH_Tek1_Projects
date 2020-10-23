/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** funtion that will check the number of args at the begining
*/

#include "./../include/architect.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int nb_linked_to_patternes(char *str, int nb)
{
    if (strcmp(str, "-t") == 0) {
        nb = nb + 3;
    }
    if (strcmp(str, "-z") == 0) {
        nb = nb + 3;
    }
    if (strcmp(str, "-r") == 0) {
        nb = nb + 2;
    }
    if (strcmp(str, "-s") == 0) {
        nb = nb + 2;
    }
    return (nb);
}

void    check_args(int ac, char **av)
{
    int i = 3;
    int nb = 0;

    if (ac <= 3) {
        write(2, "Wrong number of arguments, no transformation .\n", 47);
        exit (84);
    }
    if (my_str_isnum(av[1]) != 1 || my_str_isnum(av[2]) != 1) {
        write(2, "Wrong arguments x and/or y .\n", 29);
        exit (84);
    }
    while (i < ac) {
        nb = nb_linked_to_patternes(av[i], nb);
        i = i + 1;
    }
    nb = nb + 2;
    if ((nb + 1) != ac) {
        write(2, "Wrong number of arguments for these options .\n", 46);
        exit (84);
    }
}
