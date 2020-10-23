/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** inventory_mouse_management
*/

#include "rpg.h"

rpg_t   *inventory_mouse_management(rpg_t *rpg, sfRenderWindow *window)
{
    if (rpg->inventory->m_pressed == YES) {
        rpg = if_on_an_item_grab_it(rpg, window);
        rpg->inventory->m_pressed = NO;
    }
    if (rpg->inventory->m_released == YES) {
        rpg = if_on_an_slot_release_it(rpg, window);
        rpg->inventory->m_released = NO;
    }
    return (rpg);
}