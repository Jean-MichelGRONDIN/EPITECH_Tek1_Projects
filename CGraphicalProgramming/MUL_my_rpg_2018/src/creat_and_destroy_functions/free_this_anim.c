/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free this anim struc
*/

#include "./../../include/rpg.h"

animation_t *free_this_anim(animation_t *obj)
{
    obj->anim_clock = free_this_clock(obj->anim_clock);
    obj->move_clock = free_this_clock(obj->move_clock);
    free(obj);
    obj = NULL;
    return (obj);
}