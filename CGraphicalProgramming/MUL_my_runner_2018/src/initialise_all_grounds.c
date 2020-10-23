/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** load all ground
*/

#include "./../include/runner.h"

ground_t    **initialise_all_grounds(void)
{
    ground_t    **texture = malloc(sizeof(ground_t *) * MAX);
    int i = 0;

    while (i != MAX) {
        texture[i] = malloc(sizeof(ground_t));
        i = i + 1;
    }
    texture[BACK_GROUND] = init_back_ground(texture[BACK_GROUND]);
    texture[MIDDLE_GROUND] = init_middle_ground(texture[MIDDLE_GROUND]);
    texture[GROUND] = init_ground(texture[GROUND]);
    return (texture);
}
