/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** set_slot_pos_on_screen
*/

#include "rpg.h"

void    set_item_pos(items_t *item, sfVector2f pos)
{
    if (item != NULL) {
        sfSprite_setPosition(item->item_text->sprite, pos);
    }
}

inv_slots_t *set_equiped_pos_on_screen(inv_slots_t *slot, float x, float y)
{
    sfVector2f  pos = init_vector_two_f(x + 14, y + 14);
    inv_slots_t *tmp = slot;

    while (pos.y != (y + 155) && tmp != NULL) {
        sfSprite_setPosition(tmp->slot_texture->sprite, pos);
        set_item_pos(tmp->item, pos);
        pos.y += 36;
        tmp = tmp->next;
    }
    return (slot);
}

inv_slots_t *set_stocked_pos_on_screen(inv_slots_t *slot, float x, float y)
{
    sfVector2f  pos = init_vector_two_f(x + 14, y + 165);
    inv_slots_t *tmp = slot;
    int i = 0;

    while (pos.y < (y + 272) && tmp != NULL) {
        while (pos.x < (x + 336) && tmp != NULL) {
            sfSprite_setPosition(tmp->slot_texture->sprite, pos);
            set_item_pos(tmp->item, pos);
            pos.x += 36;
            tmp = tmp->next;
            i = i + 1;
        }
        pos.x = (x + 14);
        pos.y += 36;
    }
    return (slot);
}

inventory_t *set_slots_pos_on_screen(inventory_t *inv, sfVector2f p_pos)
{
    float   x = p_pos.x - 150;
    float   y = p_pos.y - 150;

    inv->equiped = set_equiped_pos_on_screen(inv->equiped, x, y);
    inv->stock = set_stocked_pos_on_screen(inv->stock, x, y);
    return (inv);
}