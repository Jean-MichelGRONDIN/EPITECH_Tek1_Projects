/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** walk the obj list and send it to a function that will manage it
*/

#include "./../include/defender.h"

list_t  *obj_actions(list_t *list, sfRenderWindow *window, rules_t *rules)
{
    list_t  *tmp = list;
    list_t  *save = NULL;
    int i = 0;

    while (list != NULL) {
        if (list->obj->state == DEAD) {
            save = list->next;
            tmp = remove_that_from_list(tmp, list);
            list = save;
        } else {
            list = obj_management(list, tmp, window, rules);
            list = list->next;
        }
        i = i + 1;
    }
    rules->pressed = NO;
    return (tmp);
}