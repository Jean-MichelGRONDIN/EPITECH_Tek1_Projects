/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** manage player actions
*/

#include "./../../include/rpg.h"

player_t    *player_set_pos(player_t *p)
{
    sfSprite_setPosition(p->player_texture->sprite,
        p->player_anim->pos);
    return (p);
}

player_t    *player_set_rect(player_t *p)
{
    sfSprite_setTextureRect(p->player_texture->sprite,
        p->player_anim->part);
    return (p);
}

player_t    *player_get_time(player_t *player)
{
    player->player_anim->anim_clock =
        get_time(player->player_anim->anim_clock);
    player->player_anim->move_clock =
        get_time(player->player_anim->move_clock);
    return (player);
}

rpg_t   *player_management(rpg_t *rpg, sfRenderWindow *window)
{
    rpg->player = player_get_time(rpg->player);
    if (rpg->player->move == YES) {
        rpg = manage_player_moves(rpg);
        rpg->player->move = NO;
    } else
        rpg->player = player_stop_walking(rpg->player);
    rpg->player = p_tp_management(rpg->player, rpg->maps->overworld->map_tp);
    rpg = camera_movement(rpg, window);
    sfRenderWindow_drawSprite(window,
        rpg->player->player_texture->sprite, NULL);
    return (rpg);
}