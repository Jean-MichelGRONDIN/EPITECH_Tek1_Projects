/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init a basic zombie
*/

#include "./../include/defender.h"

obj_t   *init_basic_zombie_extended(obj_t *struc, sfVector2f here)
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

obj_t   *init_basic_zombie(sfVector2f here, float now)
{
    char    *path = my_strdup("./assets/zombie.png");
    obj_t   *struc = malloc(sizeof(*struc));

    struc->type = ENEMY;
    struc->state = ALIVE;
    struc->speed = 100;
    struc->max = 300;
    struc->hp = 400;
    struc->dmg = 100;
    struc->sprite = sfSprite_create();
    struc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(struc->sprite, struc->texture, sfTrue);
    struc = init_basic_zombie_extended(struc, here);
    struc->anim = init_this_clock();
    struc->attack = init_this_clock();
    struc->delay = 0.10;
    struc->attack_delay = 2.0;
    struc->spawn = now;
    path = free_cleanly_this_str(path);
    return (struc);
}