/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** free the entire list of obj
*/

#include "./../include/defender.h"

list_t  *free_all_the_list(list_t *list)
{
    list_t  *tmp = NULL;

    if (list == NULL)
        return (list);
    while (list != NULL) {
        tmp = list->next;
        list = free_this_list_elem(list);
        list = tmp;
    }
    return (list);
}
