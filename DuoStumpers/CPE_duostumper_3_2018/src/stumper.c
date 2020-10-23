/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** first function called
*/

#include "./../include/stumper.h"

int stumper(int ac, char **av)
{
    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            my_putstr("Usage: ./cesar -f filename key OR");
            my_putstr(" ./cesar -s \"string\" key\n");
            return (0);
        }
    if (ac != 4) {
        my_pstrerr("Wrong number of arguments !\n");
        return (84);
    }
    return (initialise(av));
}
