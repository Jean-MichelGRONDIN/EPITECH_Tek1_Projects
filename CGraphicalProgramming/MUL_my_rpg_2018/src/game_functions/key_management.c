/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** keys management
*/

#include "./../../include/rpg.h"

rpg_t   *key_management(rpg_t *rpg, sfEvent *event)
{
    int stop = 0;
    int i = 0;

    while (rpg->list->event[i] != NULL && stop == 0) {
        if (event->key.code == rpg->list->event[i]->id) {
            rpg = rpg->list->event[i]->movement(rpg);
            stop = 1;
        }
        i = i + 1;
    }
    return (rpg);
}