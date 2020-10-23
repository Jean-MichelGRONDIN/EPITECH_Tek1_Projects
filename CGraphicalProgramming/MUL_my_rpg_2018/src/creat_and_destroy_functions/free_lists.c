/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free all list struc
*/

#include "./../../include/rpg.h"

lists_t *free_lists(lists_t *list)
{
    list->event = free_key_list(list->event);
    list->p_move = free_player_move_list(list->p_move);
    free(list);
    list = NULL;
    return (list);
}