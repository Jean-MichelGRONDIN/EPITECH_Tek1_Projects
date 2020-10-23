/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** the loop of the game
*/

#include "./../include/stumper.h"

int game_loop(game_t *game)
{
    int end = -1;
    int player = TWO;

    while (end == -1) {
        if (player != ONE)
            player = ONE;
        else
            player = TWO;
        game = get_user_input(game, player);
        if (game == NULL)
            return (0);
        print_map(game->map, game->width);
        end = check_end(game);
    }
    game->map = free_cleanly_str_tab(game->map);
    free(game);
    game = NULL;
    return (end);
}
