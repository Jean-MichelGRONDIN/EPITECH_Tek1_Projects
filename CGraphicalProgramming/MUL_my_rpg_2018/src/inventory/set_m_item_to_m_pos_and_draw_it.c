/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** set_m_item_to_m_pos_and_draw_it
*/

#include "rpg.h"

rpg_t   *set_m_item_to_m_pos_and_draw_it(sfRenderWindow *window, rpg_t *rpg)
{
    sfVector2i i_mouse = get_mouse_pos_with_basic_view(window);
    sfVector2f mouse = init_vector_two_f(i_mouse.x, i_mouse.y);

    sfSprite_setPosition(rpg->inventory->m_item->item_text->sprite, mouse);
    sfRenderWindow_drawSprite(window,
        rpg->inventory->m_item->item_text->sprite, NULL);
    return (rpg);
}