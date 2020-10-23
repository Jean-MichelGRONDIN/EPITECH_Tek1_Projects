/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** intialise a background passed as argument
*/

#include "./../include/defender.h"

obj_t   *init_this_background(char *path)
{
    obj_t   *bg = malloc(sizeof(obj_t));

    bg->type = BACKGROUND;
    bg->state = FREE;
    bg->sprite = sfSprite_create();
    bg->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(bg->sprite, bg->texture, sfTrue);
    bg->pos.x = 0;
    bg->pos.y = 0;
    bg->anim = NULL;
    sfSprite_setPosition(bg->sprite, bg->pos);
    return (bg);
}