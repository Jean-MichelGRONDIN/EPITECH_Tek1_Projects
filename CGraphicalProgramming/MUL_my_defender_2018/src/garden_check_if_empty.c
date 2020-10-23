/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** garden_check_if_empty
*/

#include "./../include/defender.h"

list_t  *check_of_gardens_are_empty(list_t  *list, list_t *save)
{
    list_t  *tmp = save;

    while (tmp != NULL) {
        if (tmp->obj->type == STRUCT && collision_detector(list, tmp) == 1) {
            tmp->obj->state = tmp->obj->hp <= 0 ? DEAD : tmp->obj->state;
            return (list);
        }
        tmp = tmp->next;
    }
    list->obj->state = WAITING;
    return (list);
}