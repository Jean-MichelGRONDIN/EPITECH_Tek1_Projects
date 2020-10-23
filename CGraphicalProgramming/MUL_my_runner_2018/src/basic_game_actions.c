/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** all basic game actions
*/

#include "./../include/runner.h"

my_clock_t  **basic_game_actions(sfRenderWindow *window,
    my_clock_t **time, ground_t **backg)
{
    window_action(window);
    time = get_all_times(time);
    move_all_grounds(window, backg);
    return (time);
}
