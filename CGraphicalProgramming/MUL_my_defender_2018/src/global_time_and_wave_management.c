/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** get time for global time and check if it's time for next wave
*/

#include "./../include/defender.h"

list_t  *init_n_zombie_for_this_wave(list_t *list, int nb, rules_t *rules)
{
    int i = 0;
    int *id = malloc(sizeof(int) * 2);
    float   when = rules->global_time->seconds + rules->spawn_delay;

    while (i != nb) {
        id[1] = i + 1;
        list = init_zombies(list, id, rules, when);
        when = when + rules->spawn_delay;
        i = i + 1;
    }
    return (list);
}

list_t  *is_it_time_for_next_wave(rules_t *rules, list_t *list)
{
    if (rules->spawn_delay == 3.0 && rules->global_time->seconds >= 115.0) {
        rules->spawn_delay = rules->spawn_delay - 1.5;
        list = init_n_zombie_for_this_wave(list, 25, rules);
        return (list);
    }
    if (rules->spawn_delay == 6.0 && rules->global_time->seconds >= 55.0) {
        rules->spawn_delay = rules->spawn_delay - 3;
        list = init_n_zombie_for_this_wave(list, 15, rules);
        return (list);
    }
    if (rules->spawn_delay == 10.0 && rules->global_time->seconds > 10.0) {
        rules->spawn_delay = rules->spawn_delay - 4;
        list = init_n_zombie_for_this_wave(list, 2, rules);
        return (list);
    }
    return (list);
}

list_t  *global_time_and_wave_management(rules_t *rules, list_t *list)
{
    rules->global_time = get_time(rules->global_time);
    list = is_it_time_for_next_wave(rules, list);
    return (list);
}
