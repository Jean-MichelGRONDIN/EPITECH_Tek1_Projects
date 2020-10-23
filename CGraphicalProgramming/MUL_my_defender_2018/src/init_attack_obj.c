/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init obj of basic attack and frozen attack
*/

#include "./../include/defender.h"

obj_t   *init_basic_attack_extended(obj_t *struc, obj_t *parent)
{
    struc->pos.x = parent->pos.x + 80;
    struc->pos.y = parent->pos.y;
    struc->part.top = 0;
    struc->part.left = 0;
    struc->part.width = 55;
    struc->part.height = 48;
    sfSprite_setTextureRect(struc->sprite, struc->part);
    sfSprite_setPosition(struc->sprite, struc->pos);
    struc->rect = sfSprite_getGlobalBounds(struc->sprite);
    return (struc);
}

obj_t   *init_basic_attack(obj_t *parent)
{
    char    *path = my_strdup("./assets/attack.png");
    obj_t   *struc = malloc(sizeof(*struc));

    struc->type = ATTACK;
    struc->state = BASIC_TOWER;
    struc->speed = 55;
    struc->max = 55;
    struc->dmg = parent->dmg;
    struc->sprite = sfSprite_create();
    struc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(struc->sprite, struc->texture, sfTrue);
    struc = init_basic_attack_extended(struc, parent);
    struc->anim = init_this_clock();
    struc->delay = 0.15;
    path = free_cleanly_this_str(path);
    return (struc);
}

obj_t   *init_frozen_attack_extended(obj_t *struc, obj_t *parent)
{
    struc->pos.x = parent->pos.x + 80;
    struc->pos.y = parent->pos.y;
    struc->part.top = 0;
    struc->part.left = 0;
    struc->part.width = 55;
    struc->part.height = 48;
    sfSprite_setTextureRect(struc->sprite, struc->part);
    sfSprite_setPosition(struc->sprite, struc->pos);
    struc->rect = sfSprite_getGlobalBounds(struc->sprite);
    return (struc);
}

obj_t   *init_frozen_attack(obj_t *parent)
{
    char    *path = my_strdup("./assets/frozen_attack.png");
    obj_t   *struc = malloc(sizeof(*struc));

    struc->type = ATTACK;
    struc->state = FROZEN_TOWER;
    struc->speed = 55;
    struc->max = 55;
    struc->dmg = parent->dmg;
    struc->sprite = sfSprite_create();
    struc->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(struc->sprite, struc->texture, sfTrue);
    struc = init_frozen_attack_extended(struc, parent);
    struc->anim = init_this_clock();
    struc->delay = 0.15;
    path = free_cleanly_this_str(path);
    return (struc);
}