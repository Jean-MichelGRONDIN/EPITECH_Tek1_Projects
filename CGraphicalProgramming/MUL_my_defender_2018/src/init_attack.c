/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** find what attack to init and return it obj
*/

#include "./../include/defender.h"

obj_t   *init_attack(obj_t *parent)
{
    if (parent->state == BASIC_TOWER)
        return (init_basic_attack(parent));
    else
        return (init_frozen_attack(parent));
}