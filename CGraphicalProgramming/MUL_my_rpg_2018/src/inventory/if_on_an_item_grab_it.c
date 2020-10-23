/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** if_on_an_item_grab_it
*/

#include "rpg.h"

inv_slots_t *check_touch_this_slots(inv_slots_t *list, sfRenderWindow *window)
{
    sfVector2i mouse = get_mouse_pos_with_basic_view(window);
    inv_slots_t *tmp = list;

    while (tmp != NULL) {
        tmp->slot_rect = sfSprite_getGlobalBounds(tmp->slot_texture->sprite);
        if (sfFloatRect_contains(&tmp->slot_rect, mouse.x, mouse.y))
            return (tmp);
        tmp = tmp->next;
    }
    return (NULL);
}

rpg_t   *if_on_an_item_grab_it(rpg_t *rpg, sfRenderWindow *window)
{
    inv_slots_t *touched = NULL;

    if (rpg->inventory->m_item != NULL)
        return (rpg);
    if ((touched = check_touch_this_slots(rpg->inventory->stock,
    window)) != NULL) {
        rpg->inventory->m_item = touched->item;
        touched->item = NULL;
        return (rpg);
    } else if ((touched = check_touch_this_slots(rpg->inventory->equiped,
    window)) != NULL) {
        rpg->inventory->m_item = touched->item;
        touched->item = NULL;
        rpg = stats_less_this_item(rpg);
        return (rpg);
    }
    return (rpg);
}