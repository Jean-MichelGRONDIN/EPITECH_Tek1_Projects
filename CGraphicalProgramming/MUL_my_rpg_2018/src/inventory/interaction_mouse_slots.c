/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** interaction_mouse_slots
*/

#include "rpg.h"

inv_slots_t *interaction_with_these_slots(inv_slots_t *list,
    sfRenderWindow *window)
{
    sfVector2i mouse = get_mouse_pos_with_basic_view(window);
    inv_slots_t *tmp = list;

    while (tmp != NULL) {
        tmp->slot_rect = sfSprite_getGlobalBounds(tmp->slot_texture->sprite);
        if (sfFloatRect_contains(&tmp->slot_rect,
        mouse.x, mouse.y) == sfTrue) {
            sfRenderWindow_drawSprite(window,
            tmp->slot_texture->sprite, NULL);
        }
        tmp = tmp->next;
    }
    return (list);
}

rpg_t   *interaction_mouse_slots(rpg_t *rpg,
    sfRenderWindow *window)
{
    rpg->inventory->equiped =
        interaction_with_these_slots(rpg->inventory->equiped, window);
    rpg->inventory->stock =
        interaction_with_these_slots(rpg->inventory->stock, window);
    return (rpg);
}