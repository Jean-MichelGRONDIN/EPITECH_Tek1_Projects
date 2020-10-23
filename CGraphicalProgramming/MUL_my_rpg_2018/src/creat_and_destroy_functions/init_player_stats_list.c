/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_player_stats_list
*/

#include "rpg.h"

stats_list_t    **init_player_stats_list(void)
{
    int n = 4;
    stats_list_t    **new = malloc(sizeof(*new) * (n + 1));
    int i = 0;

    while (i != n) {
        new[i] = malloc(sizeof(**new));
        i = i + 1;
    }
    new[n] = NULL;
    new[0]->type = ARMOR;
    new[0]->update = &update_armor;
    new[1]->type = BOOT;
    new[1]->update = &update_speed;
    new[2]->type = SWORD;
    new[2]->update = &update_strengh;
    new[3]->type = HEARTH;
    new[3]->update = &update_hp;
    return (new);
}