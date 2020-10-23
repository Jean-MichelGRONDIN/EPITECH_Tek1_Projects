/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** free the game struct and set it to NULL
*/

#include "./../include/stumper.h"

game_t  *free_game(game_t *game)
{
    if (game != NULL) {
        if (game->map != NULL) {
            game->map = free_cleanly_str_tab(game->map);
            game->map = NULL;
        }
        free(game);
        game = NULL;
    }
    return (game);
}
