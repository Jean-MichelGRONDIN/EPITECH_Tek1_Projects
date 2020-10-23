/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** display usage
*/

#include "./../include/navy.h"

void    print_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     first_player_pid: only for the 2nd player.");
    my_putstr(" pid of the first player\n");
    my_putstr("     navy_positions: file representing");
    my_putstr(" the positions of the ships.\n");
}
