/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw_inv_item_names_if_touched
*/

#include "rpg.h"

rpg_t   *draw_inv_items_names_if_touched(rpg_t *rpg,
    sfRenderWindow *window)
{
    inv_slots_t *touched = NULL;

    if ((touched = check_touch_this_slots(rpg->inventory->stock,
    window)) == NULL)
        touched = check_touch_this_slots(rpg->inventory->equiped, window);
    if (touched != NULL && touched->item != NULL)
        print_that_item_name(touched->item, rpg->inventory, window);
    return (rpg);
}