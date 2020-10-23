/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** make the payer stop walk when not walking
*/

#include "./../../include/rpg.h"

player_t    *player_stop_walking(player_t *p)
{
    float   now = 1.0;

    if (p->player_anim->part.left != 0 &&
        p->player_anim->anim_clock->seconds >= now) {
        p->player_anim->part.left = 0;
        p = player_set_rect(p);
        sfClock_restart(p->player_anim->anim_clock->clock);
    }
    return (p);
}