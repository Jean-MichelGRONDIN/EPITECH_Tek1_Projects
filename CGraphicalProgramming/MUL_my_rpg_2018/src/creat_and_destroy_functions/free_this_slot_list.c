/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free_slot_list
*/

#include "rpg.h"

inv_slots_t *free_this_slot(inv_slots_t *list)
{
    if (list != NULL) {
        free(list);
        list = NULL;
    }
    return (list);
}

inv_slots_t *free_this_slot_list(inv_slots_t *list)
{
    inv_slots_t *tmp = NULL;

    while (list != NULL) {
        tmp = list->next;
        list = free_this_slot(list);
        list = tmp;
    }
    return (list);
}