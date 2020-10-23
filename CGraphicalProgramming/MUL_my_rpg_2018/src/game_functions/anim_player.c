/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** anim the player
*/

#include "./../../include/rpg.h"

player_t    *anim_player(player_t *p)
{
    if (p->player_anim->part.left < 48) {
        p->player_anim->part.left += 16;
    } else
        p->player_anim->part.left = 0;
    return (p);
}