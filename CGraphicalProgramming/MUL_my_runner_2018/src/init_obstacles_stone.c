/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init 5 stones obstacles
*/

#include "./../include/runner.h"

ground_t    *init_stone1(ground_t *stone)
{
    char    *filepath = my_strdup("textures/obstacles/Stone_1.png");

    stone->activate = 0;
    stone->type = STONE1;
    stone->speed = 10;
    stone->sprite = sfSprite_create();
    stone->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(stone->sprite, stone->texture, sfTrue);
    stone->position.x = 1930;
    stone->position.y = 630;
    stone->rect.top = 0;
    stone->rect.left = 0;
    stone->rect.width = 200;
    stone->rect.height = 270;
    sfSprite_setPosition(stone->sprite, stone->position);
    sfSprite_setTextureRect(stone->sprite, stone->rect);
    free(filepath);
    return (stone);
}

ground_t    *init_stone2(ground_t *stone)
{
    char    *filepath = my_strdup("textures/obstacles/Stone_2.png");

    stone->activate = 0;
    stone->type = STONE2;
    stone->speed = 10;
    stone->sprite = sfSprite_create();
    stone->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(stone->sprite, stone->texture, sfTrue);
    stone->position.x = 1930;
    stone->position.y = 650;
    stone->rect.top = 0;
    stone->rect.left = 0;
    stone->rect.width = 150;
    stone->rect.height = 250;
    sfSprite_setPosition(stone->sprite, stone->position);
    sfSprite_setTextureRect(stone->sprite, stone->rect);
    free(filepath);
    return (stone);
}

ground_t    *init_stone3(ground_t *stone)
{
    char    *filepath = my_strdup("textures/obstacles/Stone_3.png");

    stone->activate = 0;
    stone->type = STONE3;
    stone->speed = 10;
    stone->sprite = sfSprite_create();
    stone->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(stone->sprite, stone->texture, sfTrue);
    stone->position.x = 1930;
    stone->position.y = 800;
    stone->rect.top = 0;
    stone->rect.left = 0;
    stone->rect.width = 200;
    stone->rect.height = 100;
    sfSprite_setPosition(stone->sprite, stone->position);
    sfSprite_setTextureRect(stone->sprite, stone->rect);
    free(filepath);
    return (stone);
}

ground_t    *init_stone4(ground_t *stone)
{
    char    *filepath = my_strdup("textures/obstacles/Stone_4.png");

    stone->activate = 0;
    stone->type = STONE4;
    stone->speed = 10;
    stone->sprite = sfSprite_create();
    stone->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(stone->sprite, stone->texture, sfTrue);
    stone->position.x = 1930;
    stone->position.y = 630;
    stone->rect.top = 0;
    stone->rect.left = 0;
    stone->rect.width = 160;
    stone->rect.height = 270;
    sfSprite_setPosition(stone->sprite, stone->position);
    sfSprite_setTextureRect(stone->sprite, stone->rect);
    free(filepath);
    return (stone);
}

ground_t    *init_stone5(ground_t *stone)
{
    char    *filepath = my_strdup("textures/obstacles/Stone_5.png");

    stone->activate = 0;
    stone->type = STONE5;
    stone->speed = 10;
    stone->sprite = sfSprite_create();
    stone->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(stone->sprite, stone->texture, sfTrue);
    stone->position.x = 1930;
    stone->position.y = 700;
    stone->rect.top = 0;
    stone->rect.left = 0;
    stone->rect.width = 250;
    stone->rect.height = 200;
    sfSprite_setPosition(stone->sprite, stone->position);
    sfSprite_setTextureRect(stone->sprite, stone->rect);
    free(filepath);
    return (stone);
}
