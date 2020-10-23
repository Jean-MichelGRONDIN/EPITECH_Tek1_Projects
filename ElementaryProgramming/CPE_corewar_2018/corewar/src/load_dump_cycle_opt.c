/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** load_dump_cycle_opt
*/

#include "../../include/corewar/corewar.h"

int find_nb_dump_in_av(int ac, char **av)
{
    int nb = 0;
    int i = 0;

    while (i != ac) {
        if (my_strcmp(av[i], "-dump") == 0)
            nb = nb + 1;
        i = i + 1;
    }
    return (nb);
}

int find_dump_pos_in_av(int ac, char **av)
{
    int i = 0;

    while (i != ac) {
        if (my_strcmp(av[i], "-dump") == 0)
            return (i);
        i = i + 1;
    }
    return (-1);
}

int get_dump_number(int ac, char **av, int n)
{
    if (n + 1 >= ac) {
        my_pstrerr("Missing info for the option -dump !\n");
        return (-84);
    }
    if (my_str_is_int(av[n + 1]) == 0) {
        my_pstrerr("-dump info must be an integer !\n");
        return (-84);
    }
    return (my_getnbr(av[n + 1]));
}

int load_dump_cycle_opt(int ac, char **av)
{
    int res = -1;
    int nb = 0;
    int n = 0;

    nb = find_nb_dump_in_av(ac, av);
    if (nb > 1) {
        my_pstrerr("Multiple definition of option dump.\n");
        return (-84);
    }
    if (nb == 1) {
        n = find_dump_pos_in_av(ac, av);
        if (n != -1) {
            res = get_dump_number(ac, av, n);
        }
    }
    return (res);
}