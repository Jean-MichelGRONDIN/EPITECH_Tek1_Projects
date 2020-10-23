/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** draw map, connect to other player and start the game loop
*/

#include "./../include/navy.h"

int launch_game(int ac, char **pos)
{
    char    **my_map = init_empty_map();
    char    **enemy = init_empty_map();
    int res = 0;

    if ((my_map = fill_the_map_with_pos(my_map, pos)) == NULL) {
        pos = free_cleanly_str_tab(pos);
        return (84);
    }
    if (connect_to_enemy(ac) == -1) {
        my_pstrerr("Error Failed to connect to the enemy !\n");
        my_map = free_cleanly_str_tab(my_map);
        enemy = free_cleanly_str_tab(enemy);
        return (84);
    }
    init_basic_sigaction_usr_2();
    if (ac == 2)
        res = game_loop_player_one(my_map, enemy);
    else
        res = game_loop_player_two(my_map, enemy);
    return (res);
}
