/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** a little bit more of rigor
*/

#include "./../include/torus.h"

int initialise(int ac, char **av)
{
    double  *args = init_args(ac, av);
    int opt = args[0];

    if (opt < 1 || opt > 3) {
        write(2, "Opt must be 1, 2 or 3 !\n", 24);
        return (84);
    }
    return (choose_methode(args));
}
