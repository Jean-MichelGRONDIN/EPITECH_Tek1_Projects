/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** free_tetrimino_list
*/

#include "./../include/tetris.h"

tetrimino_t *free_tetrimino_struc(tetrimino_t *obj)
{
    if (obj != NULL) {
        obj->shape = free_cleanly_str_tab(obj->shape);
        obj->name = free_cleanly_this_str(obj->name);
        free(obj);
        obj = NULL;
    }
    return (obj);
}

tetriminos_t    *free_tetrimino_list(tetriminos_t * list)
{
    tetriminos_t    *tmp = NULL;

    while (list != NULL) {
        tmp = list->next;
        list->obj = free_tetrimino_struc(list->obj);
        free(list);
        list = NULL;
        list = tmp;
    }
    return (list);
}