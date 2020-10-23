/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** check all characters
*/

#include "./../include/sokoban.h"

void    c_filter(char c)
{
    if (c != '#' && c != 'X' && c != 'O' && c != 'P' && c != ' ') {
        write(2, "WRONG characters !\n", 19);
        exit(84);
    }
}
