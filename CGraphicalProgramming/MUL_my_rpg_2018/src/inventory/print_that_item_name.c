/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** print_that_item_name
*/

#include "rpg.h"

void    print_that_item_name(items_t *item, inventory_t *inv,
    sfRenderWindow *window)
{
    sfFloatRect rect_pos = sfSprite_getGlobalBounds(item->item_text->sprite);
    sfVector2f pos = init_vector_two_f(rect_pos.left, rect_pos.top - 40);

    sfText_setString(inv->name_text, item->item_id);
    sfText_setPosition(inv->name_text, pos);
    sfRenderWindow_drawText(window, inv->name_text, NULL);
}