/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** manage user actions
*/

#include "./../include/runner.h"

void    user_actions(sfRenderWindow *window, ground_t *player,
    sfEvent *event)
{
    if (event->type == sfEvtKeyPressed && player->type == RUNNER) {
        if (event->key.code == sfKeySpace) {
            player->type = JUMPER;
            player->rect.top = 450;
            player->rect.left = 0;
        }
    } else if (event->type == sfEvtClosed)
        sfRenderWindow_close(window);
}
