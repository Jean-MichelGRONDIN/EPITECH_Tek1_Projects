/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** zoom in and out functions
*/

#include "./../../include/rpg.h"

rpg_t   *zoom_in(rpg_t *rpg)
{
    if (rpg->cam->zoom < 5) {
        rpg->cam->zoom += 1;
        sfView_zoom(rpg->cam->camera, 1 / 1.20);
    }
    return (rpg);
}

rpg_t   *zoom_out(rpg_t *rpg)
{
    if (rpg->cam->zoom > 4) {
        rpg->cam->zoom -= 1;
        sfView_zoom(rpg->cam->camera, 1.20);
    }
    return (rpg);
}