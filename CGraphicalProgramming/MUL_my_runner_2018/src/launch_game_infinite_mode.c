/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** first steps to launch the game
*/

#include "./../include/runner.h"

void    launch_game_infinite_mode(void)
{
    ground_t    **texture = initialise_all_grounds();
    ground_t    **player = initialise_all_players_object();
    ground_t    **obstacles = initialise_all_obstacles();

    game_loop_infinite(texture, player, obstacles);
}
