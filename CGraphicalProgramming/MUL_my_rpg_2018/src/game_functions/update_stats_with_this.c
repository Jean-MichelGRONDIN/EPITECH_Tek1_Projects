/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** update_stats_with_this
*/

#include "rpg.h"

player_t    *update_stats_with_this(player_t *p, stats_list_t **list,
    int new_type, int new_how)
{
    int i = 0;

    while (list[i] != NULL) {
        if (list[i]->type == new_type) {
            list[i]->update(p, new_how);
            return (p);
        }
        i = i + 1;
    }
    return (p);
}