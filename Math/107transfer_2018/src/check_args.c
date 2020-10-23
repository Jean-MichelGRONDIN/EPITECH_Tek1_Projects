/*
** EPITECH PROJECT, 2019
** 107transer_2018
** File description:
** check that arguments are only number and start are not misplassed
*/

#include "./../include/transfer.h"

int check_args(int ac, char **av)
{
    if (check_args_chars(ac, av) == 1) {
        my_pstrerr("Error arguments must only be numbers !\n");
        return (1);
    }
    if (check_stars_positions(ac, av) == 1)
        return (1);
    return (0);
}
