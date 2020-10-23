/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** display the usage
*/

#include "./../include/bombyx.h"

void    disp_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("   ./106bombyx n [k | i0 i1]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    n       number of first generation individuals\n");
    my_putstr("    k       growth rate from 1 to 4\n");
    my_putstr("    i0      initial generation (included)\n");
    my_putstr("    i1      final generation (included)\n");
}
