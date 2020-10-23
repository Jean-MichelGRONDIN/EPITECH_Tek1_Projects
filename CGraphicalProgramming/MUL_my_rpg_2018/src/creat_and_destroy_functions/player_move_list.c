/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init player moves list
*/

#include "./../../include/rpg.h"

player_move_t   **init_player_move_list(void)
{
    int nb = 4;
    player_move_t   **new = malloc(sizeof(player_move_t *) * (nb + 1));
    int i = 0;

    while (i != nb) {
        new[i] = malloc(sizeof(**new));
        i = i + 1;
    }
    new[nb] = NULL;
    new[0]->dir = UP;
    new[0]->move_p = &p_move_up;
    new[1]->dir = DOWN;
    new[1]->move_p = &p_move_down;
    new[2]->dir = LEFT;
    new[2]->move_p = &p_move_left;
    new[3]->dir = RIGHT;
    new[3]->move_p = &p_move_right;
    return (new);
}

player_move_t   **free_player_move_list(player_move_t **list)
{
    int i = 0;

    while (list[i] != NULL) {
        free(list[i]);
        list[i] = NULL;
        i = i + 1;
    }
    free(list);
    list = NULL;
    return (list);
}