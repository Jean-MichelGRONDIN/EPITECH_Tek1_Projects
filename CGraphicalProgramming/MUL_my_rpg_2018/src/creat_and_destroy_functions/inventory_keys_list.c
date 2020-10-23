/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** inventory_keys_list
*/

#include "rpg.h"

inv_events_t    **init_inventory_keys_part_one(inv_events_t **list)
{
    list[0]->inv_id = sfKeyI;
    list[0]->inv_action = &close_inventory;
    list[1]->inv_id = sfKeyEscape;
    list[1]->inv_action = &close_inventory;
    return (list);
}