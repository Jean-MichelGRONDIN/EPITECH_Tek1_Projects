/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** manage action for structures
*/

#include "./../include/defender.h"

list_t  *plant_action(list_t *list, rules_t *rules)
{
    if (list->obj->state == GENERATOR)
        rules->money += 25;
    else {
        sfMusic_play(rules->plop);
        list = add_obj_to_list(init_attack(list->obj), list);
    }
    return (list);
}

list_t  *manage_struct(list_t *list, sfRenderWindow *window, rules_t *rules)
{
    if (list->obj->attack != NULL)
        list->obj->attack = get_time(list->obj->attack);
    if (list->obj->anim->seconds >= list->obj->delay) {
        if (list->obj->part.left < list->obj->max)
            list->obj->part.left = list->obj->part.left + list->obj->speed;
        else
            list->obj->part.left = 0;
        if (list->obj->attack != NULL &&
            list->obj->attack->seconds > list->obj->attack_delay) {
            list = plant_action(list, rules);
            sfClock_restart(list->obj->attack->clock);
        }
        sfSprite_setTextureRect(list->obj->sprite, list->obj->part);
        sfClock_restart(list->obj->anim->clock);
    }
    sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);
    return (list);
}