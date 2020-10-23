/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** add_to_list of tetriminos
*/

#include "./../include/tetris.h"

tetriminos_t *add_to_list(tetriminos_t *list, char *full_name)
{
    tetrimino_t *struc = init_tetrimino_struc();
    tetriminos_t *tmp = list;
    tetriminos_t *new = malloc(sizeof(*new));

    struc->name = full_name;
    new->obj = struc;
    new->next = NULL;
    new->prev = NULL;
    if (list == NULL)
        return (new);
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = new;
    new->prev = list;
    return (tmp);
}