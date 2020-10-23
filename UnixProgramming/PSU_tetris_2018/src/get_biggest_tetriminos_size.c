/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** get_biggest_tetriminos_height
*/

#include "./../include/tetris.h"

int get_biggest_tetriminos_width(tetriminos_t *list)
{
    tetriminos_t    *tmp = list;
    int biggest = -1;

    while (tmp != NULL) {
        if (biggest < tmp->obj->t_width)
            biggest = tmp->obj->t_width;
        tmp = tmp->next;
    }
    return (biggest);
}

int get_biggest_tetriminos_height(tetriminos_t *list)
{
    tetriminos_t    *tmp = list;
    int biggest = -1;

    while (tmp != NULL) {
        if (biggest < tmp->obj->t_height)
            biggest = tmp->obj->t_height;
        tmp = tmp->next;
    }
    return (biggest);
}