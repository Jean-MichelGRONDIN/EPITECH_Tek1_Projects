/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** init variable that are in rulers structure
*/

#include "./../include/runner.h"

rulers_t    *init_rulers(void)
{
    rulers_t *rules = malloc(sizeof(*rules));

    rules->music = sfMusic_createFromFile("musique/musique.wav");
    rules->sound = sfMusic_createFromFile("musique/sound.wav");
    rules->score = 0;
    rules->lose = 0;
    return (rules);
}
