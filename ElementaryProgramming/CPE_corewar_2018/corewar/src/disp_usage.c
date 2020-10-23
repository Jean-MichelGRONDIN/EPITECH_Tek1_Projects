/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** display the usage of this part
*/

#include "corewar.h"

void    disp_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("        ./corewar [-dump nbr_cycle] [[-n prog_number]");
    my_putstr(" [-a load_address] prog_name] ...\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("        -dump nbr_cycle dumps the memory after the");
    my_putstr(" nbr_cycle execution (if the round isn’t\n");
    my_putstr("                        already over) with the");
    my_putstr(" following format:  32 bytes/line in\n");
    my_putstr("                        hexadecimal (A0BCDEFE1DD3...)\n");
    my_putstr("        -n prog_number  sets the next program’s");
    my_putstr(" number.  By default, the first free number\n");
    my_putstr("                        in the parameter order\n");
    my_putstr("        -a load_address sets the next program’s");
    my_putstr(" loading address.  When no address is\n");
    my_putstr("                        specified, optimize");
    my_putstr(" the addresses so that the processes are as far\n");
    my_putstr("                        away from each other as");
    my_putstr(" possible.  The addresses are MEM_SIZE modulo\n");
}
