/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** display the usage of this part
*/

#include "asm.h"

void    disp_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("        ./asm file_name[.s]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("        file_name       file in assembly language to be");
    my_putstr(" converted into file_name.cor, an\n");
    my_putstr("                        executable in the Virtual Machine.\n");
}
