/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** manage zombie
*/

#include "./../include/defender.h"

rules_t *when_too_far_you_loose(sfRenderWindow *window, rules_t *rules)
{
    rules->choice = MENU;
    pause_and_print_this_screen(window, "./assets/game_over.png");
    return (rules);
}

list_t  *zombie_attack(list_t *list, list_t *tmp)
{
    list->obj->attack = get_time(list->obj->attack);
    if (list->obj->state != DEAD &&
        list->obj->attack->seconds >= list->obj->attack_delay)
        list = zombie_damage_management(tmp, list);
    return (list);
}

list_t  *manage_zombie(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules)
{
    if (list->obj->spawn > rules->global_time->seconds)
        return (list);
    list = zombie_attack(list, tmp);
    if (list->obj->state == ALIVE &&
        list->obj->anim->seconds >= list->obj->delay) {
        if (list->obj->part.left < list->obj->max)
            list->obj->part.left = list->obj->part.left + list->obj->speed;
        else
            list->obj->part.left = 0;
        if (list->obj->pos.x < 385)
            when_too_far_you_loose(window, rules);
        else
            list->obj->pos.x = list->obj->pos.x - 5;
        sfSprite_setTextureRect(list->obj->sprite, list->obj->part);
        sfSprite_setPosition(list->obj->sprite, list->obj->pos);
        sfClock_restart(list->obj->anim->clock);
    }
    if (list->obj->state != DEAD)
        sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);
    return (list);
}