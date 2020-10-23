/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** first function of the project
*/

#include "./../include/generator.h"

int generator(int ac, char **av)
{
    int perfect = 0;

    if (ac < 3 || ac > 4) {
        my_pstrerr("Error wrong number of args !\n");
        return (84);
    }
    if (ac == 4) {
        if (my_strcmp(av[3], "perfect") == 0)
            perfect = 1;
        else {
            my_pstrerr("Error third argument corrupted !\n");
            return (84);
        }
    }
    return (initialise_size(av, perfect));
}
