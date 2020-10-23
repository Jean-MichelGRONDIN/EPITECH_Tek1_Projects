/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** add the obj to the list
*/

#include "./../include/defender.h"

list_t  *add_obj_to_list(obj_t *to_add, list_t *list)
{
    list_t   *tmp = list;
    list_t  *new = malloc(sizeof(*new));

    new->obj = to_add;
    new->next = NULL;
    if (list == NULL)
        return (new);
    else {
        while (list->next != NULL) {
            list = list->next;
        }
        list->next = new;
    }
    return (tmp);
}