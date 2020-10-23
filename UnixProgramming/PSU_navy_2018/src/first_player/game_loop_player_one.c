/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** the loop of the game for the player 1
*/

#include "./../../include/navy.h"

int game_loop_player_one(char **me, char **enemy)
{
    char    end = -1;

    while (end == -1 && me != NULL && enemy != NULL) {
        print_maps(me, enemy);
        enemy = my_turn(enemy);
        end = is_this_the_end(me, enemy);
        if (end == -1) {
            me = wait_enemy(me);
            end = is_this_the_end(me, enemy);
        }
    }
    me = free_cleanly_str_tab(me);
    enemy = free_cleanly_str_tab(enemy);
    return (end);
}
