/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** manage attack actions
*/

#include "./../include/defender.h"

list_t  *manage_attack(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules)
{
    if (list->obj->state != DEAD)
        list = attack_damage_management(tmp, list, rules);
    if (list->obj->anim->seconds >= list->obj->delay) {
        if (list->obj->part.left < list->obj->max)
            list->obj->part.left = list->obj->part.left + list->obj->speed;
        else
            list->obj->part.left = 0;
        if (list->obj->pos.x > 1200)
            list->obj->state = DEAD;
        else
            list->obj->pos.x = list->obj->pos.x + 20;
        sfSprite_setTextureRect(list->obj->sprite, list->obj->part);
        sfSprite_setPosition(list->obj->sprite, list->obj->pos);
        sfClock_restart(list->obj->anim->clock);
    }
    sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);

    return (list);
}