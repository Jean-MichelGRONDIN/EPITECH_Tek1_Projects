/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init logo menu
*/

#include "./../include/defender.h"

obj_t   *init_logo_menu(void)
{
    obj_t   *bl =  malloc(sizeof(obj_t));

    bl->sprite = sfSprite_create();
    bl->texture = sfTexture_createFromFile("./assets/logo.png", NULL);
    sfSprite_setTexture(bl->sprite, bl->texture, sfTrue);
    bl->pos.x = 40;
    bl->pos.y = 20;
    bl->part.top = 0;
    bl->part.left = 0;
    bl->part.width = 499;
    bl->part.height = 200;
    sfSprite_setTextureRect(bl->sprite, bl->part);
    sfSprite_setPosition(bl->sprite, bl->pos);
    return (bl);
}