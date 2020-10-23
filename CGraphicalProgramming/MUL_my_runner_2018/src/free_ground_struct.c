/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** free the background structure
*/

#include "./../include/runner.h"

void    free_this_ground_struct(ground_t *backg)
{
    sfSprite_destroy(backg->sprite);
    sfTexture_destroy(backg->texture);
}

void    free_ground_struct(ground_t **backg, int max)
{
    int i = 0;

    while (i != max) {
        free_this_ground_struct(backg[i]);
        free(backg[i]);
        i = i + 1;
    }
    free(backg);
}
