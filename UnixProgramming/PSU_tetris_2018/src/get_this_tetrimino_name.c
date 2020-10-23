/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** get_this_tetrimino_name
*/

#include "./../include/tetris.h"

char    *get_this_tetrimino_name(char *str)
{
    char    *res = NULL;
    int n = count_until_line_finisher(str, ".");

    res = my_strndup(str, n);
    str = free_cleanly_this_str(str);
    return (res);
}