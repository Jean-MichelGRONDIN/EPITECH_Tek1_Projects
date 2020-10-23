/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init player struc
*/

#include "./../../include/rpg.h"

player_t    *init_player_next(player_t *player)
{
    player->hp_max = 10;
    player->blobe = 0;
    player->snake = 0;
    player->sor  = 0;
    player->lvl = 1;
    player->dmg = 2;
    player->speed = 1;
    return (player);
}

player_t    *init_player(void)
{
    player_t    *player = malloc(sizeof(*player));

    player->pos_p = init_vector_two_f(433, 335);
    player->rect_p = init_int_rect(0, 16, 0, 16);
    player->dir = DOWN;
    player->move = NO;
    player->hp = 10;
    player->defense = 0;
    player->player_texture = init_texture_struc("./assets/player.png");
    player->player_anim = init_anim_struc(player->pos_p,
        player->rect_p, 0.03, 0.2);
    sfSprite_setTextureRect(player->player_texture->sprite,
        player->player_anim->part);
    sfSprite_setPosition(player->player_texture->sprite,
        player->player_anim->pos);
    player = init_player_next(player);
    return (player);
}
