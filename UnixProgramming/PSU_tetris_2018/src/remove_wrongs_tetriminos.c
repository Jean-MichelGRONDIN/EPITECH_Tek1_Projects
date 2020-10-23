/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** remove_wrongs_tetriminos
*/

#include "./../include/tetris.h"

tetriminos_t    *prev_to_null(tetriminos_t  *list)
{
    if (list != NULL)
        list->prev = NULL;
    return (list);
}

tetriminos_t    *remove_part(tetriminos_t *list, tetriminos_t *last,
    tetriminos_t *now, tetriminos_t *after)
{
    if (last != NULL)
        last->next = after;
    if (after != NULL)
        after->prev = last;
    free(now);
    now = NULL;
    return (list);
}

tetriminos_t    *remove_that_from_tetriminos_list(tetriminos_t *list,
    tetriminos_t *to_find)
{
    int end = 0;
    tetriminos_t    *tmp = list;

    if (my_strcmp(list->obj->name, to_find->obj->name) == 0) {
        tmp = prev_to_null(list->next);
        free(list);
        list = tmp;
        end = 1;
    }
    while (end == 0 && tmp != NULL) {
        if (my_strcmp(tmp->obj->name, to_find->obj->name) == 0) {
            list = remove_part(list, tmp->prev, tmp, tmp->next);
            end = 1;
        } else
            tmp = tmp->next;
    }
    return (list);
}

tetriminos_t    *remove_wrong_tetriminos(tetriminos_t *list)
{
    tetriminos_t    *tmp = list;
    tetriminos_t    *save = NULL;

    while (tmp != NULL) {
        if (tmp->obj->shape == NULL) {
            save = tmp->next;
            list = remove_that_from_tetriminos_list(list, tmp);
            tmp = save;
        } else
            tmp = tmp->next;
    }
    return (list);
}