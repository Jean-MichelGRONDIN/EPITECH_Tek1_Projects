/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** mange button actions
*/

#include "./../include/defender.h"

list_t  *toolbar_management(list_t *list,
    sfRenderWindow *window, rules_t *rules)
{
    sfVector2i mouse_pos;

    mouse_pos = sfMouse_getPositionRenderWindow(window);
    list->obj = manage_plant_button(list->obj, mouse_pos, rules, window);
    sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);
    return (list);
}