/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** display the usage
*/

#include "./../include/my_norm.h"

void    disp_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("    (manual)$> ./Normichel path\n");
    my_putstr("    (after the intallation script)$> Normichel path\n\n");
    my_putstr("OR JUST\n");
    my_putstr("    (manual)$> ./Normichel\n");
    my_putstr("    (after the intallation script)$> Normichel\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    path           from where the norm checker is launched\n");
    my_putstr("                   (if nothing, it's from where you are)\n\n");
    my_putstr(" --This norm checker will find inexistant errors if :\n");
    my_putstr("  - you make an error in a string/char between quotation marks,\n");
    my_putstr("  - in the 6 first lines, the biggest part of all verifications avoid the\n");
    my_putstr("    6 first lines of a file because it's supposed to be the\n");
    my_putstr("    header and nothing else,\n\n");
    my_putstr("WHAT IS CHECKED :\n");
    my_putstr("      - number of chars by line,\n");
    my_putstr("      - tabulations,\n");
    my_putstr("      - indentation,\n");
    my_putstr("      - missing or corrupted header,\n");
    my_putstr("      - comma(s),\n");
    my_putstr("      - number of lines in a function,\n");
    my_putstr("      - spaces at the end of a line,\n");
    my_putstr("      - spaces around '=',\n");
    my_putstr("      - space after 'while', 'if', 'for' and 'return',\n");
    my_putstr("      - frequents banned functions,\n");
    my_putstr("      - number of functions in a file,\n");
    my_putstr("      - comment(s) inside a function or header files.\n\n");
}
