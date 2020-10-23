/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free player struc
*/

#include "./../../include/rpg.h"

player_t    *free_player(player_t *player)
{
    player->player_texture = free_this_texture(player->player_texture);
    player->player_anim = free_this_anim(player->player_anim);
    free(player);
    player = NULL;
    return (player);
}