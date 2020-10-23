/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** if_on_an_slot_release_it
*/

#include "rpg.h"

rpg_t   *if_on_an_slot_release_it_part_two(rpg_t *rpg, inv_slots_t *touched
    , int equip)
{
    if (touched != NULL) {
        if (touched->item == NULL && equip == 1)
            rpg = stats_add_this_item(rpg);
        if (touched->item == NULL) {
            touched->item = rpg->inventory->m_item;
            rpg->inventory->m_item = NULL;
        }
    }
    if (rpg->inventory->m_item != NULL) {
        rpg->inventory->stock = add_item_to_this_inv(rpg->inventory->stock,
            rpg->inventory->m_item);
        rpg->inventory->m_item = NULL;
    }
    return (rpg);
}

rpg_t   *if_on_an_slot_release_it(rpg_t *rpg, sfRenderWindow *window)
{
    inv_slots_t *touched = NULL;
    sfVector2f  zero_pos = init_vector_two_f(0, 0);
    int equip = 0;

    if (rpg->inventory->m_item == NULL)
        return (rpg);
    if ((touched = check_touch_this_slots(rpg->inventory->stock,
    window)) == NULL) {
        if ((touched = check_touch_this_slots(rpg->inventory->equiped,
        window)) != NULL)
            equip = 1;
    }
    rpg = if_on_an_slot_release_it_part_two(rpg, touched, equip);
    rpg->inventory = set_slots_pos_on_screen(rpg->inventory, zero_pos);
    return (rpg);
}