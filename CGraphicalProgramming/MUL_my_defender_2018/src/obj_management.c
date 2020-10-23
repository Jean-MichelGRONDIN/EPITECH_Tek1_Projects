/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** send obj into function linked to their type
*/

#include "./../include/defender.h"

list_t  *obj_management(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules)
{
    if (list->obj->anim != NULL)
        list->obj->anim = get_time(list->obj->anim);
    if (list->obj->type == BACKGROUND)
        sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);
    if (list->obj->type == GARDEN)
        list = garden_management(list, tmp, window, rules);
    if (list->obj->type == TOOLBAR)
        list = toolbar_management(list, window, rules);
    if (list->obj->type == STRUCT)
        list = manage_struct(list, window, rules);
    if (list->obj->type == ENEMY)
        list = manage_zombie(list, tmp, window, rules);
    if (list->obj->type == ATTACK)
        list = manage_attack(list, tmp, window, rules);
    if (list->obj->type == MONEY)
        list = display_money(list, rules, window);
    return (list);
}