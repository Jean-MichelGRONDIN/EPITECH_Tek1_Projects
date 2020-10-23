/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_n_empty_inv_slots
*/

#include "rpg.h"

inv_slots_t *init_a_new_slot(void)
{
    inv_slots_t *new = malloc(sizeof(*new));

    new->item = NULL;
    new->slot_texture = init_texture_struc("assets/inv_slot.png");
    new->next = NULL;
    return (new);
}

inv_slots_t *add_to_slot_list(inv_slots_t *list)
{
    inv_slots_t *tmp = list;
    inv_slots_t *new = init_a_new_slot();

    if (list == NULL)
        return (new);
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = new;
    return (tmp);
}

inv_slots_t *init_n_empty_inv_slots(int n)
{
    int i = 0;
    inv_slots_t *list = NULL;

    while (i != n) {
        list = add_to_slot_list(list);
        i = i + 1;
    }
    return (list);
}