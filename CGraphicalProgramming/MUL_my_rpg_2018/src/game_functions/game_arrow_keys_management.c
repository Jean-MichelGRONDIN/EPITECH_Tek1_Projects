/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** manage arraow key actions
*/

#include "./../../include/rpg.h"

rpg_t   *key_left(rpg_t *rpg)
{
    if (rpg->player->move == NO)
        rpg->player->move = YES;
    rpg->player->dir = LEFT;
    return (rpg);
}

rpg_t   *key_right(rpg_t *rpg)
{
    if (rpg->player->move == NO)
        rpg->player->move = YES;
    rpg->player->dir = RIGHT;
    return (rpg);
}

rpg_t   *key_up(rpg_t *rpg)
{
    if (rpg->player->move == NO)
        rpg->player->move = YES;
    rpg->player->dir = UP;
    return (rpg);
}

rpg_t   *key_down(rpg_t *rpg)
{
    if (rpg->player->move == NO)
        rpg->player->move = YES;
    rpg->player->dir = DOWN;
    return (rpg);
}