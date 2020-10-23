/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** initialise rules struct and return it
*/

#include "./../include/defender.h"

rules_t *init_rules(void)
{
    rules_t *rules = malloc(sizeof(*rules));

    rules->money = 200;
    rules->pressed = NO;
    rules->choice = -1;
    rules->selected = -1;
    rules->spawn_delay = 10.0;
    rules->global_time = init_this_clock();
    rules->music = sfMusic_createFromFile("./assets/game_music.wav");
    sfMusic_setLoop(rules->music, sfTrue);
    sfMusic_play(rules->music);
    rules->hit = sfMusic_createFromFile("./assets/zombie_hit.wav");
    rules->plop = sfMusic_createFromFile("./assets/plop.wav");
    return (rules);
}