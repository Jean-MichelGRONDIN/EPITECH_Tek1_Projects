/*
** EPITECH PROJECT, 2019
** 107transfer_2018
** File description:
** first function of the prog, where it begin
*/

#include "./../include/transfer.h"

int transfer(int ac, char **av)
{
    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            disp_usage();
            return (0);
        }
    if (ac < 3 || (ac % 2) != 1) {
        my_pstrerr("Wrong number of arguments !\n");
        return (84);
    }
    if (check_args(ac, av) == 1) {
        return (84);
    }
    return (0);
}
