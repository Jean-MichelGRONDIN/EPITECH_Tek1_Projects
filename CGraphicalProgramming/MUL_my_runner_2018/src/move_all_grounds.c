/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** move all background, forground ...
*/

#include "./../include/runner.h"

void    move_all_grounds(sfRenderWindow *window, ground_t **backg)
{
    int i = 0;

    while (i != MAX) {
        backg[i]->move(backg[i]);
        sfRenderWindow_drawSprite(window, backg[i]->sprite, NULL);
        i = i + 1;
    }
}
