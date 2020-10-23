/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_inventory_items
*/

#include "rpg.h"

inv_slots_t *draw_this_slot_items(inv_slots_t *list, sfRenderWindow *window)
{
    inv_slots_t *tmp = list;

    while (tmp != NULL) {
        if (tmp->item != NULL)
            sfRenderWindow_drawSprite(window,
            tmp->item->item_text->sprite, NULL);
        tmp = tmp->next;
    }
    return (list);
}

inventory_t *draw_inventory_items(inventory_t *inv, sfRenderWindow *window)
{
    inv->equiped = draw_this_slot_items(inv->equiped, window);
    inv->stock = draw_this_slot_items(inv->stock, window);
    return (inv);
}