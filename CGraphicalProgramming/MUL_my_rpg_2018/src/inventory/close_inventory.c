/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** close_inventory
*/

#include "rpg.h"

rpg_t   *close_inventory(rpg_t *rpg)
{
    rpg->inventory->status = NO;
    return (rpg);
}