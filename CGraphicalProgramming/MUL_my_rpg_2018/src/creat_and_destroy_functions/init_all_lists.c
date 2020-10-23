/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init all lists of the game
*/

#include "./../../include/rpg.h"

lists_t *init_all_lists(void)
{
    lists_t *new = malloc(sizeof(*new));

    new->event = init_key_array();
    new->p_move = init_player_move_list();
    new->inv_keys = init_inventory_key_list();
    new->p_stats_list = init_player_stats_list();
    return (new);
}