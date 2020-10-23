/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** attacks management for damage
*/

#include "./../include/defender.h"

list_t  *attack_damage_management(list_t *save,
    list_t *list, rules_t *rules)
{
    list_t  *tmp = save;

    while (tmp != NULL) {
        if (tmp->obj->type == ENEMY && collision_detector(list, tmp) == 1) {
            sfMusic_play(rules->hit);
            tmp->obj->hp = tmp->obj->hp - list->obj->dmg;
            tmp->obj->delay += list->obj->state == FROZEN_TOWER ? 0.2 : 0.0;
            tmp->obj->delay = tmp->obj->delay > 0.5 ? 0.5 : tmp->obj->delay;
            list->obj->state = DEAD;
            tmp->obj->state = tmp->obj->hp <= 0 ? DEAD : tmp->obj->state;
            return (list);
        }
        tmp = tmp->next;
    }
    return (list);
}