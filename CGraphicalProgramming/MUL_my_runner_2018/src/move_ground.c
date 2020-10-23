/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** move the image square to do a parallax
*/

#include "./../include/runner.h"

void    move_ground(ground_t *ground)
{
    if (ground->rect.left < (1920 * 2)) {
        ground->rect.left = ground->rect.left + ground->speed;
    } else {
        ground->rect.left = 0;
    }
    sfSprite_setTextureRect(ground->sprite, ground->rect);
}
