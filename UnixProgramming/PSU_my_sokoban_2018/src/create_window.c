/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** creat the window
*/

#include "./../include/sokoban.h"

void    create_win(void)
{
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);
    refresh();
}
