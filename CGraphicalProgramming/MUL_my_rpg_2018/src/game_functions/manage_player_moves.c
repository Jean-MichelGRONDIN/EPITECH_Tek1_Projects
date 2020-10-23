/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** manage playe rmoves on the map
*/

#include "./../../include/rpg.h"

rpg_t   *manage_player_moves(rpg_t *rpg)
{
    int i = 0;
    float now = rpg->player->player_anim->anim_delay;

    if (rpg->player->player_anim->anim_clock->seconds < now)
        return (rpg);
    while (rpg->list->p_move[i] != NULL) {
        if (rpg->player->dir == rpg->list->p_move[i]->dir) {
            rpg = rpg->list->p_move[i]->move_p(rpg);
            sfSprite_setPosition(rpg->player->player_texture->sprite,
            rpg->player->player_anim->pos);
            sfClock_restart(rpg->player->player_anim->anim_clock->clock);
            return (rpg);
        }
        i = i + 1;
    }
    return (rpg);
}