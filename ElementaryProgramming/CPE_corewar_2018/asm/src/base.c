/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** base
*/

#include "asm.h"

int convert_2_10(char *str)
{
    int nb = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] == '1')
            nb += my_compute_power_rec(2, 7 - i);
        i++;
    }
    return (nb);
}
