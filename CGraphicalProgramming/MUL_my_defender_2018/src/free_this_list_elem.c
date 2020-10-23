/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** free this elem from list
*/

#include "./../include/defender.h"

list_t  *free_this_list_elem(list_t *elem)
{
    if (elem != NULL) {
        if (elem->obj != NULL)
            elem->obj = free_this_obj(elem->obj);
        elem->next = NULL;
        free(elem);
        elem = NULL;
    }
    return (elem);
}
