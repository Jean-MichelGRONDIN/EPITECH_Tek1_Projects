/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** destroy sound variables
*/

#include "./../include/runner.h"

void    destroy_musics(rulers_t *rules)
{
    sfMusic_stop(rules->music);
    sfMusic_destroy(rules->music);
    sfMusic_stop(rules->sound);
    sfMusic_destroy(rules->sound);
}
