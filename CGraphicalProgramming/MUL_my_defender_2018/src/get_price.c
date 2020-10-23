/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** get the price of the type send as parameter
*/

#include "./../include/defender.h"

int get_price(int type)
{
    if (type == GENERATOR)
        return (50);
    if (type == WALL)
        return (50);
    if (type == BASIC_TOWER)
        return (100);
    if (type == FROZEN_TOWER)
        return (175);
    return (0);
}