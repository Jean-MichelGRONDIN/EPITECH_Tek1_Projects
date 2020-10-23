/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** free the rules structure
*/

#include "./../include/defender.h"

rules_t *free_rules(rules_t *rules)
{
    if (rules != NULL) {
        if (rules->global_time != NULL) {
            sfClock_destroy(rules->global_time->clock);
            free(rules->global_time);
            rules->global_time = NULL;
        }
        sfMusic_destroy(rules->music);
        sfMusic_destroy(rules->hit);
        sfMusic_destroy(rules->plop);
        free(rules);
        rules = NULL;
    }
    return (rules);
}