/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** launch_inventory
*/

#include "./../../include/rpg.h"

rpg_t   *launch_inventory(rpg_t *rpg)
{
    rpg->inventory->status = YES;
    return (rpg);
}