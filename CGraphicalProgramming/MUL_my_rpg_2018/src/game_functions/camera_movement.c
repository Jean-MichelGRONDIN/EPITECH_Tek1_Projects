/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** manage camera movement
*/

#include "./../../include/rpg.h"

rpg_t   *camera_movement(rpg_t *rpg, sfRenderWindow *window)
{
    sfView_setCenter(rpg->cam->camera, rpg->player->player_anim->pos);
    sfRenderWindow_setView(window, rpg->cam->camera);
    return (rpg);
}