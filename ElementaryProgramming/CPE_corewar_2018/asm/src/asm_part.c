/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** first function called
*/

#include "asm.h"

int asm_part(int ac, char **av)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            disp_usage();
            return (0);
        }
        return (initialise(av[1]));
    }
    return (84);
}
