/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init different rect struc
*/

#include "./../../include/rpg.h"

sfIntRect   init_int_rect(int x, int x_max, int y, int y_max)
{
    sfIntRect new;

    new.left = x;
    new.top = y;
    new.height = y_max;
    new.width = x_max;
    return (new);
}