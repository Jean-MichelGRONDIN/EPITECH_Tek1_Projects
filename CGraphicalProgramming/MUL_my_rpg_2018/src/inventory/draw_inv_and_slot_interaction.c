/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_inv_and_slot_interaction
*/

#include "rpg.h"

rpg_t   *draw_inv_and_slot_interaction(rpg_t *rpg, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window,
        rpg->inventory->font_texture->sprite, NULL);
    rpg = interaction_mouse_slots(rpg, window);
    rpg->inventory = draw_inventory_items(rpg->inventory, window);
    if (rpg->inventory->m_item != NULL)
        rpg = set_m_item_to_m_pos_and_draw_it(window, rpg);
    print_inventory_stats(window, rpg->player, rpg->inventory);
    return (rpg);
}