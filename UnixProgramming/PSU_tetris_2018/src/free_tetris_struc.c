/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** free the tetris struc, set it to NULL and return it
*/

#include "./../include/tetris.h"

tetris_t    *free_tetris_struc(tetris_t *t)
{
    if (t != NULL) {
        t->t_list = free_tetrimino_list(t->t_list);
        free(t);
        t = NULL;
    }
    return (t);
}