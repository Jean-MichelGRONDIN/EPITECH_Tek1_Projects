/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** manage gardens
*/

#include "./../include/defender.h"

list_t  *garden_management(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules)
{
    sfVector2i  mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    list = check_of_gardens_are_empty(list, tmp);
    if (sfFloatRect_contains(&list->obj->rect, mouse_pos.x, mouse_pos.y)) {
        if (rules->selected != -1 && rules->pressed == YES &&
            list->obj->state != OCCUPED &&
            rules->money >= get_price(rules->selected)) {
            list = add_obj_to_list(init_this_struct(rules->selected,
            list->obj->pos), list);
            rules->money -= get_price(rules->selected);
            rules->selected = -1;
            list->obj->state = OCCUPED;
        }
        sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);
    }
    return (list);
}