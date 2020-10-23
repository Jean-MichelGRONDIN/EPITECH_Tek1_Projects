/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** make the player run movements
*/

#include "./../include/runner.h"

void    jump_management(ground_t *runner)
{
    if (runner->rect.left < 750) {
        runner->rect.left = runner->rect.left + runner->speed;
        runner->position.y = runner->position.y - 100;
    }else if (runner->rect.left < 1250) {
        runner->rect.left = runner->rect.left + runner->speed;
        runner->position.y = runner->position.y + 150;
    } else {
        runner->rect.top = 0;
        runner->rect.left = 0;
        runner->type = RUNNER;
    }
    sfSprite_setPosition(runner->sprite, runner->position);
}

void    move_player(ground_t *runner)
{
    if (runner->type == JUMPER) {
        jump_management(runner);
    } else {
        if (runner->rect.left < 1250) {
            runner->rect.left = runner->rect.left + runner->speed;
        } else {
            runner->rect.left = 0;
        }
    }
    sfSprite_setTextureRect(runner->sprite, runner->rect);
}
