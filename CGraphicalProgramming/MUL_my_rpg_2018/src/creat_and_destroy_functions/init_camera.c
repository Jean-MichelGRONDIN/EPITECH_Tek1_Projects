/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init cammera struct
*/

#include "./../../include/rpg.h"

camera_t    *init_camera(void)
{
    camera_t    *new = malloc(sizeof(*new));
    sfFloatRect P = {0, 0, 1920, 1080};

    new->mode = CENTRED;
    new->zoom = 5;
    new->camera = sfView_createFromRect(P);
    sfView_zoom(new->camera, 1 / (new->zoom * 1.20));
    return (new);
}
