/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** order_tetriminos
*/

#include "./../include/tetris.h"

tetriminos_t    *swap_this_one_and_the_next(tetriminos_t *list,
    tetriminos_t *now)
{
    tetriminos_t    *save = now;
    tetriminos_t    *last = now->prev;
    tetriminos_t    *after = now->next;

    if (last != NULL)
        last->next = after;
    after->prev = last;
    save->next = after->next;
    after->next = save;
    save->prev = after;
    if (save->next != NULL)
        save->next->prev = save;
    if (last == NULL)
        return (after);
    return (list);
}

tetriminos_t    *order_tetriminos(tetriminos_t *list)
{
    tetriminos_t    *now = list;

    while (now->next != NULL) {
        if (my_strcmp(now->obj->name, now->next->obj->name) <= 0) {
            now = now->next;
        } else {
            list = swap_this_one_and_the_next(list, now);
            now = list;
        }
    }
    return (list);
}