/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** the loop of the game
*/

#include "./../include/match.h"

int game_loop(map_t *map)
{
    int player = AI;
    input_t    *input = init_input_struct(0, 0);

    while (is_it_over(map->nb_sticks, map->nb_line) != 0) {
        player == USER ? (player = AI) : (player = USER);
        if (player == USER) {
            input = player_turn(input, map);
            map = modify_the_map(input, map);
        } else {
            ai_turn(input, map);
            map = modify_the_map(input, map);
        }
        if (input == NULL)
            return (0);
        say_what_happened_last_turn(input, player);
        display_game_board(map->nb_line, map->nb_sticks);
    }
    player = find_who_win(player);
    return (player);
}
