/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** add_item_to_this_inv
*/

#include "rpg.h"

inv_slots_t *add_item_to_this_inv(inv_slots_t *list, items_t *new_item)
{
    inv_slots_t *tmp = list;

    while (tmp != NULL) {
        if (tmp->item == NULL) {
            tmp->item = new_item;
            return (list);
        }
        tmp = tmp->next;
    }
    return (list);
}