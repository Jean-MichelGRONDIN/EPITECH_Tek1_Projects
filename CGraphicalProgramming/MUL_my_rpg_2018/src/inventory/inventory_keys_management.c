/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** inventory_keys_management
*/

#include "rpg.h"

rpg_t   *inventory_keys_management(rpg_t *rpg, sfEvent *event)
{
    int stop = 0;
    int i = 0;

    while (stop == 0 && rpg->list->inv_keys[i] != NULL) {
        if (event->key.code == rpg->list->inv_keys[i]->inv_id) {
            rpg = rpg->list->inv_keys[i]->inv_action(rpg);
            stop = 1;
        }
        i = i + 1;
    }
    return (rpg);
}