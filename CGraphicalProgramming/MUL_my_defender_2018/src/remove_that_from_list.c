/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** remove that elem from string
*/

#include "./../include/defender.h"

list_t  *remove_that_from_list(list_t *list, list_t *to_remove)
{
    list_t  *tmp = list;
    list_t  *delete = NULL;

    while (list->next != NULL && list->next != to_remove) {
        list = list->next;
    }
    delete = list->next;
    list->next = list->next->next;
    delete = free_this_list_elem(delete);
    return (tmp);
}