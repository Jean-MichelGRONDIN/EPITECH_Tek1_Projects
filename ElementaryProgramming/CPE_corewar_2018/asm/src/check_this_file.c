/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** check_this_file
*/

#include "asm.h"

int check_this_file(char **file)
{
    int i = 0;

    while (check_rigor_list[i].n != -1) {
        if (check_rigor_list[i].check(file) != 0)
            return (84);
        i = i + 1;
    }
    return (0);
}