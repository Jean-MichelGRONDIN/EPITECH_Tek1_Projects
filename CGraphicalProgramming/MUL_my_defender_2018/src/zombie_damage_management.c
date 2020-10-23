/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** zombie_damage_management
*/

#include "./../include/defender.h"

list_t  *zombie_damage_management(list_t *save, list_t *list)
{
    list_t  *tmp = save;

    sfClock_restart(list->obj->attack->clock);
    while (tmp != NULL) {
        if (tmp->obj->type == STRUCT && collision_detector(list, tmp) == 1) {
            tmp->obj->hp = tmp->obj->hp - list->obj->dmg;
            list->obj->state = WAITING;
            tmp->obj->state = tmp->obj->hp <= 0 ? DEAD : tmp->obj->state;
            return (list);
        } else if (list->obj->state != DEAD)
            list->obj->state = ALIVE;
        tmp = tmp->next;
    }
    return (list);
}