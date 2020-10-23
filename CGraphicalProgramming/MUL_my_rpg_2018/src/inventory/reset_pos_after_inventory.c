/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** reset_pos_after_inventory
*/

#include "rpg.h"

rpg_t   *reset_pos_after_inventory(rpg_t *rpg, sfRenderWindow *window)
{
    sfView_zoom(rpg->cam->camera, 1 / (1.20 * rpg->cam->zoom));
    sfSprite_setPosition(rpg->player->player_texture->sprite,
        rpg->player->player_anim->pos);
    sfView_setCenter(rpg->cam->camera, rpg->player->player_anim->pos);
    sfSprite_setPosition(rpg->player->player_texture->sprite,
        rpg->player->player_anim->pos);
    sfSprite_setTextureRect(rpg->player->player_texture->sprite,
        rpg->player->player_anim->part);
    window = window;
    return (rpg);
}