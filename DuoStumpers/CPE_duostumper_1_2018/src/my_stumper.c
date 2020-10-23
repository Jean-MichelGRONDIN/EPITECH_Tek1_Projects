/*
** EPITECH PROJECT, 2019
** CPE_stumper_1_2018
** File description:
** first function of the prog
*/

#include "./../include/duo.h"

int my_stumper(int ac, char **av)
{
    int nb = 0;

    if (ac != 4) {
        my_pstrerr("Wrong number of arguments !\n");
        return (84);
    }
    if (check_params(av) == 1)
        return (84);
    nb = my_getnbr(av[1]);
    if (nb < 0) {
        my_pstrerr("Error the argument one (n) cannot be less than 0 !\n");
        return (84);
    }
    return (fractal(av, nb));
}
