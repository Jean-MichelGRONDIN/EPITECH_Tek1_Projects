/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** player movement fonctions
*/

#include "./../../include/rpg.h"

int collision_detector_up(player_t *player, entity_list *pnj_list);

int collision_detector_down(player_t *player, entity_list *pnj_list);

int collision_detector_right(player_t *player, entity_list *pnj_list);

int collision_detector_left(player_t *player, entity_list *pnj_list);

rpg_t   *p_move_left(rpg_t *rpg)
{
    float now = rpg->player->player_anim->move_clock->seconds;
    int x = rpg->player->player_anim->pos.x;
    int y = rpg->player->player_anim->pos.y;

    if (collision_detector_left(rpg->player, rpg->entities->pnjs) == 1
        || collision_detector_left(rpg->player, rpg->entities->mobs) == 1
        || collision_detector_left(rpg->player, rpg->entities->chest) == 1)
        return (rpg);
    if (pos_texture_col(rpg->maps->overworld->col, x - (x % 16),
    y + (y % 16)) == 1) {
        rpg->player->player_anim->pos.x -= rpg->player->speed;
    }
    if (rpg->player->player_anim->move_delay <= now) {
        rpg->player->player_anim->part.top = 32;
        rpg->player = anim_player(rpg->player);
        sfClock_restart(rpg->player->player_anim->move_clock->clock);
    }
    rpg->player = player_set_rect(rpg->player);
    rpg->step = 0;
    return (rpg);
}

rpg_t   *p_move_right(rpg_t *rpg)
{
    float now = rpg->player->player_anim->move_clock->seconds;
    int x = rpg->player->player_anim->pos.x;
    int y = rpg->player->player_anim->pos.y;

    if (collision_detector_right(rpg->player, rpg->entities->pnjs) == 1
        || collision_detector_right(rpg->player, rpg->entities->mobs) == 1
        || collision_detector_right(rpg->player, rpg->entities->chest) == 1)
        return (rpg);
    if (pos_texture_col(rpg->maps->overworld->col, x + 16 - (x % 16),
    y + (y % 16)) == 1) {
        rpg->player->player_anim->pos.x += rpg->player->speed;
    }
    if (rpg->player->player_anim->move_delay <= now) {
        rpg->player->player_anim->part.top = 16;
        rpg->player = anim_player(rpg->player);
        sfClock_restart(rpg->player->player_anim->move_clock->clock);
    }
    rpg->player = player_set_rect(rpg->player);
    rpg->step = 0;
    return (rpg);
}

rpg_t   *p_move_up(rpg_t *rpg)
{
    float now = rpg->player->player_anim->move_clock->seconds;
    int x = rpg->player->player_anim->pos.x;
    int y = rpg->player->player_anim->pos.y;

    if (collision_detector_up(rpg->player, rpg->entities->pnjs) == 1
        || collision_detector_up(rpg->player, rpg->entities->mobs) == 1
        || collision_detector_up(rpg->player, rpg->entities->chest) == 1)
        return (rpg);
    if (pos_texture_col(rpg->maps->overworld->col, x + (x % 16),
    y - (y % 16)) == 1) {
        rpg->player->player_anim->pos.y -= rpg->player->speed;
    }
    if (rpg->player->player_anim->move_delay <= now) {
        rpg->player->player_anim->part.top = 48;
        rpg->player = anim_player(rpg->player);
        sfClock_restart(rpg->player->player_anim->move_clock->clock);
    }
    rpg->player = player_set_rect(rpg->player);
    rpg->step = 0;
    return (rpg);
}

rpg_t   *p_move_down(rpg_t *rpg)
{
    float now = rpg->player->player_anim->move_clock->seconds;
    int x = rpg->player->player_anim->pos.x;
    int y = rpg->player->player_anim->pos.y;

    if (collision_detector_down(rpg->player, rpg->entities->pnjs) == 1
        || collision_detector_down(rpg->player, rpg->entities->mobs) == 1
        || collision_detector_down(rpg->player, rpg->entities->chest) == 1)
        return (rpg);
    if (pos_texture_col(rpg->maps->overworld->col, x + (x % 16),
    y + 16 - (y % 16)) == 1) {
        rpg->player->player_anim->pos.y += rpg->player->speed;
    }
    if (rpg->player->player_anim->move_delay <= now) {
        rpg->player->player_anim->part.top = 0;
        rpg->player = anim_player(rpg->player);
        sfClock_restart(rpg->player->player_anim->move_clock->clock);
    }
    rpg->player = player_set_rect(rpg->player);
    rpg->step = 0;
    return (rpg);
}
