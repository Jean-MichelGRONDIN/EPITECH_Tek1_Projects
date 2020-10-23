/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** inventory_loop
*/

#include "./../../include/rpg.h"

rpg_t   *inventory_loop(rpg_t *rpg, sfRenderWindow *window)
{
    sfEvent event;

    rpg = set_inventory_positions(rpg, window);
    while (rpg->inventory->status == YES && rpg->end == 0) {
        rpg = inventory_mouse_management(rpg, window);
        rpg = draw_inv_and_slot_interaction(rpg, window);
        rpg = draw_inv_items_names_if_touched(rpg, window);
        rpg = inventory_events(rpg, window, &event);
        window_action(window);
    }
    rpg = reset_pos_after_inventory(rpg, window);
    return (rpg);
}