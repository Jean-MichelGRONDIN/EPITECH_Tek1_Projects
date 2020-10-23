/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** inv_player_draw_and_anim
*/

#include "rpg.h"

rpg_t   *inv_player_draw_and_anim(rpg_t *rpg, sfRenderWindow *window)
{
    rpg->inventory->inv_player->anim_clock =
    get_time(rpg->inventory->inv_player->anim_clock);
    if (rpg->inventory->inv_player->anim_clock->seconds >
    rpg->inventory->inv_player->anim_delay) {
        if (rpg->inventory->inv_player->part.top > 48)
            rpg->inventory->inv_player->part.top = 0;
        else
            rpg->inventory->inv_player->part.top += 16;
        sfSprite_setTextureRect(rpg->player->player_texture->sprite,
        rpg->inventory->inv_player->part);
        sfClock_restart(rpg->inventory->inv_player->anim_clock->clock);
    }
    sfRenderWindow_drawSprite(window,
        rpg->player->player_texture->sprite, NULL);
    return (rpg);
}