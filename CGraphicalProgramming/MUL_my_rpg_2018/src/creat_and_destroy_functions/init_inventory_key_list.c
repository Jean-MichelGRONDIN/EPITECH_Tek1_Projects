/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_inventory_key_list
*/

#include "rpg.h"

inv_events_t    **init_inventory_key_list(void)
{
    int nb = 2;
    inv_events_t    **new = malloc(sizeof(*new) * (nb + 1));
    int i = 0;

    while (i != nb) {
        new[i] = malloc(sizeof(**new));
        i = i + 1;
    }
    new[nb] = NULL;
    new = init_inventory_keys_part_one(new);
    return (new);
}

inv_events_t    **free_inventory_key_list(inv_events_t **list)
{
    int i = 0;

    while (list[i] != NULL) {
        free(list[i]);
        list[i] = NULL;
        i = i + 1;
    }
    free(list);
    list = NULL;
    return (list);
}