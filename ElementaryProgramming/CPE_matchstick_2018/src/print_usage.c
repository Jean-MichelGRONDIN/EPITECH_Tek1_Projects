/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** display the usage
*/

#include "./../include/match.h"

void    display_usage(void)
{
    my_putstr("GAME\n");
    my_putstr("    Play against an AI,\n");
    my_putstr("    The Last who remove a stick or sticks lose\n\n");
    my_putstr("USAGE\n");
    my_putstr("    ./matchstick nb_line nb_removable\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    nb_line         number of ligne of the pyramid, it");
    my_putstr(" must be 1 < n < 100\n");
    my_putstr("    nb_removable    number max of stick removable in");
    my_putstr(" one turn on a line\n");
}
