/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** frist part of functions for key_list
*/

#include "./../../include/rpg.h"

key_array_t **arrow_part_and_shift(key_array_t **list)
{
    list[0]->id = sfKeyLeft;
    list[0]->movement = &key_left;
    list[1]->id = sfKeyRight;
    list[1]->movement = &key_right;
    list[2]->id = sfKeyUp;
    list[2]->movement = &key_up;
    list[3]->id = sfKeyDown;
    list[3]->movement = &key_down;
    return (list);
}

key_array_t **zoom_part(key_array_t **list)
{
    list[4]->id = sfKeyAdd;
    list[4]->movement = &zoom_in;
    list[5]->id = sfKeySubtract;
    list[5]->movement = &zoom_out;
    return (list);
}

key_array_t **inventory_part(key_array_t **list)
{
    list[6]->id = sfKeyI;
    list[6]->movement = &launch_inventory;
    return (list);
}

key_array_t **interaction_part(key_array_t **list)
{
    list[7]->id = sfKeyE;
    list[7]->movement = &interact_with_the_key_e;
    return (list);
}