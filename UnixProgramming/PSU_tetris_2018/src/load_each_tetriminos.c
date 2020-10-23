/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load_each_tetrimminos
*/

#include "./../include/tetris.h"

tetris_t    *load_each_tetriminos(tetris_t *t)
{
    tetriminos_t    *tmp = NULL;

    t->t_list = order_tetriminos(t->t_list);
    tmp = t->t_list;
    while (tmp != NULL) {
        load_this_tetrimino(tmp->obj, t->debug);
        tmp = tmp->next;
    }
    return (t);
}