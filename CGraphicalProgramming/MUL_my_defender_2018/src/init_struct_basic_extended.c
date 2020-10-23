/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init the basic structures of the game
*/

#include "./../include/defender.h"

obj_t   *init_frozen_extended(obj_t *struc, sfVector2f here)
{
    struc->pos.x = here.x;
    struc->pos.y = here.y;
    struc->part.top = 0;
    struc->part.left = 0;
    struc->part.width = 100;
    struc->part.height = 97;
    sfSprite_setTextureRect(struc->sprite, struc->part);
    sfSprite_setPosition(struc->sprite, struc->pos);
    struc->rect = sfSprite_getGlobalBounds(struc->sprite);
    return (struc);
}

obj_t   *init_frozen(sfVector2f here)
{
    char    *path = my_strdup("./assets/frozen.png");
    obj_t   *struc = malloc(sizeof(*struc));

    struc->type = STRUCT;
    struc->state = FROZEN_TOWER;
    struc->speed = 100;
    struc->max = 300;
    struc->hp = 250;
    struc->dmg = 100;
    struc->sprite = sfSprite_create();
    struc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(struc->sprite, struc->texture, sfTrue);
    struc = init_frozen_extended(struc, here);
    struc->anim = init_this_clock();
    struc->attack = init_this_clock();
    struc->delay = 0.35;
    struc->attack_delay = 5.0;
    path = free_cleanly_this_str(path);
    return (struc);
}

obj_t   *init_wall_extended(obj_t *struc, sfVector2f here)
{
    struc->pos.x = here.x;
    struc->pos.y = here.y;
    struc->part.top = 0;
    struc->part.left = 0;
    struc->part.width = 99;
    struc->part.height = 99;
    sfSprite_setTextureRect(struc->sprite, struc->part);
    sfSprite_setPosition(struc->sprite, struc->pos);
    struc->rect = sfSprite_getGlobalBounds(struc->sprite);
    return (struc);
}

obj_t   *init_wall(sfVector2f here)
{
    char    *path = my_strdup("./assets/mur.png");
    obj_t   *struc = malloc(sizeof(*struc));

    struc->type = STRUCT;
    struc->state = WALL;
    struc->speed = 99;
    struc->max = 99;
    struc->hp = 1000;
    struc->dmg = 0;
    struc->sprite = sfSprite_create();
    struc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(struc->sprite, struc->texture, sfTrue);
    struc = init_wall_extended(struc, here);
    struc->anim = init_this_clock();
    struc->attack = NULL;
    struc->delay = 0.60;
    path = free_cleanly_this_str(path);
    return (struc);
}
