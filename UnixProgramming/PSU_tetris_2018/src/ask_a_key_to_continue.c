/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** ask_a_key_to_continue
*/

#include "./../include/tetris.h"

void    ask_a_key_to_continue(void)
{
    char c;

    my_printf("Press any key to start Tetris");
    initscr();
    read(0, &c, 1);
    endwin();
}