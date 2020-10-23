/*
** EPITECH PROJECT, 2019
** dq
** File description:
** sqd
*/

#include "./../../include/rpg.h"

void set_pos_fight(fight_t *new)
{
    sfSprite_setPosition(
        new->forest->sprite, new->back_g_stat->pos);
    sfSprite_setPosition(
        new->all_life->health_enm->sprite,
        new->all_life->health_enm_stat->pos);
    sfSprite_setPosition(
        new->all_life->health_player->sprite,
        new->all_life->health_player_stat->pos);
    sfSprite_setPosition(
        new->all_life->life_enm->sprite,
        new->all_life->stat_life_enm->pos);
    sfSprite_setPosition(
        new->all_life->life_player->sprite,
        new->all_life->sat_life_player->pos);
}

void set_rect_fight(fight_t *new)
{
    sfSprite_setTextureRect(
        new->forest->sprite, new->back_g_stat->part);
    sfSprite_setTextureRect
    (new->all_life->health_enm->sprite,
    new->all_life->health_enm_stat->part);
    sfSprite_setTextureRect(
        new->all_life->health_player->sprite,
        new->all_life->health_player_stat->part);
    sfSprite_setTextureRect(
        new->all_life->life_enm->sprite,
        new->all_life->sat_life_player->part);
    sfSprite_setTextureRect(
        new->all_life->life_player->sprite,
        new->all_life->sat_life_player->part);
}

void set_sprite_stat_for_fight(fight_t *new)
{
    set_pos_fight(new);
    set_rect_fight(new);
}
