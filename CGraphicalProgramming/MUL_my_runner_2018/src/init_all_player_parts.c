/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** function that init each parts of the players objects
*/

#include "./../include/runner.h"

ground_t    *init_runner_part(ground_t *runner)
{
    runner->type = RUNNER;
    runner->speed = 250;
    runner->move = &move_player;
    runner->sprite = sfSprite_create();
    runner->texture = sfTexture_createFromFile("textures/player.png", NULL);
    sfSprite_setTexture(runner->sprite, runner->texture, sfTrue);
    runner->position.x = 300;
    runner->position.y = 500;
    runner->rect.top = 0;
    runner->rect.left = 0;
    runner->rect.width = 250;
    runner->rect.height = 400;
    sfSprite_setPosition(runner->sprite, runner->position);
    sfSprite_setTextureRect(runner->sprite, runner->rect);
    return (runner);
}
