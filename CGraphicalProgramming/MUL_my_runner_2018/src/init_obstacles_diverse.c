/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init 5 diverse obstacles
*/

#include "./../include/runner.h"

ground_t    *init_anchor(ground_t *anchor)
{
    char    *filepath = my_strdup("textures/obstacles/Anchor.png");

    anchor->activate = 0;
    anchor->type = ANCHOR;
    anchor->speed = 10;
    anchor->sprite = sfSprite_create();
    anchor->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(anchor->sprite, anchor->texture, sfTrue);
    anchor->position.x = 1930;
    anchor->position.y = 700;
    anchor->rect.top = 0;
    anchor->rect.left = 0;
    anchor->rect.width = 160;
    anchor->rect.height = 200;
    sfSprite_setPosition(anchor->sprite, anchor->position);
    sfSprite_setTextureRect(anchor->sprite, anchor->rect);
    free(filepath);
    return (anchor);
}

ground_t    *init_barrel1(ground_t *barrel)
{
    char    *filepath = my_strdup("textures/obstacles/Barrel_1.png");

    barrel->activate = 0;
    barrel->type = BARREL1;
    barrel->speed = 10;
    barrel->sprite = sfSprite_create();
    barrel->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(barrel->sprite, barrel->texture, sfTrue);
    barrel->position.x = 1930;
    barrel->position.y = 700;
    barrel->rect.top = 0;
    barrel->rect.left = 0;
    barrel->rect.width = 160;
    barrel->rect.height = 200;
    sfSprite_setPosition(barrel->sprite, barrel->position);
    sfSprite_setTextureRect(barrel->sprite, barrel->rect);
    free(filepath);
    return (barrel);
}

ground_t    *init_barrel2(ground_t *barrel)
{
    char    *filepath = my_strdup("textures/obstacles/Barrel_2.png");

    barrel->activate = 0;
    barrel->type = BARREL2;
    barrel->speed = 10;
    barrel->sprite = sfSprite_create();
    barrel->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(barrel->sprite, barrel->texture, sfTrue);
    barrel->position.x = 1930;
    barrel->position.y = 750;
    barrel->rect.top = 0;
    barrel->rect.left = 0;
    barrel->rect.width = 186;
    barrel->rect.height = 150;
    sfSprite_setPosition(barrel->sprite, barrel->position);
    sfSprite_setTextureRect(barrel->sprite, barrel->rect);
    free(filepath);
    return (barrel);
}

ground_t    *init_bomb(ground_t *bomb)
{
    char    *filepath = my_strdup("textures/obstacles/Bomb.png");

    bomb->activate = 0;
    bomb->type = BOMB;
    bomb->speed = 10;
    bomb->sprite = sfSprite_create();
    bomb->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(bomb->sprite, bomb->texture, sfTrue);
    bomb->position.x = 1930;
    bomb->position.y = 700;
    bomb->rect.top = 0;
    bomb->rect.left = 0;
    bomb->rect.width = 210;
    bomb->rect.height = 200;
    sfSprite_setPosition(bomb->sprite, bomb->position);
    sfSprite_setTextureRect(bomb->sprite, bomb->rect);
    free(filepath);
    return (bomb);
}

ground_t    *init_wheel(ground_t *wheel)
{
    char    *filepath = my_strdup("textures/obstacles/Steering-wheel.png");

    wheel->activate = 0;
    wheel->type = STEERING_WHEEL;
    wheel->speed = 10;
    wheel->sprite = sfSprite_create();
    wheel->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(wheel->sprite, wheel->texture, sfTrue);
    wheel->position.x = 1930;
    wheel->position.y = 710;
    wheel->rect.top = 0;
    wheel->rect.left = 0;
    wheel->rect.width = 200;
    wheel->rect.height = 190;
    sfSprite_setPosition(wheel->sprite, wheel->position);
    sfSprite_setTextureRect(wheel->sprite, wheel->rect);
    free(filepath);
    return (wheel);
}
