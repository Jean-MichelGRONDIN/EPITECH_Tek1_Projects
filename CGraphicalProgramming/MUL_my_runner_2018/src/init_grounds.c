/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init all ground in a structure
*/

#include "./../include/runner.h"

ground_t    *init_back_ground(ground_t *backg)
{
    char    *filepath = my_strdup("textures/backg.png");

    backg->type = BACK_GROUND;
    backg->speed = 1;
    backg->move = &move_ground;
    backg->sprite = sfSprite_create();
    backg->texture = sfTexture_createFromFile(filepath, NULL);
    sfTexture_setRepeated(backg->texture, 1);
    sfSprite_setTexture(backg->sprite, backg->texture, sfTrue);
    backg->position.x = 0;
    backg->position.y = 0;
    backg->rect.top = 0;
    backg->rect.left = 0;
    backg->rect.width = 1920;
    backg->rect.height = 1080;
    sfSprite_setPosition(backg->sprite, backg->position);
    sfSprite_setTextureRect(backg->sprite, backg->rect);
    return (backg);
}

ground_t    *init_middle_ground(ground_t *middleg)
{
    char    *filepath = my_strdup("textures/middle_ground.png");

    middleg->type = MIDDLE_GROUND;
    middleg->speed = 3;
    middleg->move = &move_ground;
    middleg->sprite = sfSprite_create();
    middleg->texture = sfTexture_createFromFile(filepath, NULL);
    sfTexture_setRepeated(middleg->texture, 1);
    sfSprite_setTexture(middleg->sprite, middleg->texture, sfTrue);
    middleg->position.x = 0;
    middleg->position.y = -200;
    middleg->rect.top = 0;
    middleg->rect.left = 0;
    middleg->rect.width = 1920;
    middleg->rect.height = 1080;
    sfSprite_setPosition(middleg->sprite, middleg->position);
    sfSprite_setTextureRect(middleg->sprite, middleg->rect);
    return (middleg);
}

ground_t    *init_ground(ground_t *ground)
{
    ground->type = GROUND;
    ground->speed = 10;
    ground->move = &move_ground;
    ground->sprite = sfSprite_create();
    ground->texture = sfTexture_createFromFile("textures/ground.png", NULL);
    sfTexture_setRepeated(ground->texture, 1);
    sfSprite_setTexture(ground->sprite, ground->texture, sfTrue);
    ground->position.x = 0;
    ground->position.y = 0;
    ground->rect.top = 0;
    ground->rect.left = 0;
    ground->rect.width = 1920;
    ground->rect.height = 1080;
    sfSprite_setPosition(ground->sprite, ground->position);
    sfSprite_setTextureRect(ground->sprite, ground->rect);
    return (ground);
}
