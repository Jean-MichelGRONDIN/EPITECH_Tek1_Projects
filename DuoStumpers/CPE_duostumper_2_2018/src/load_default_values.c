/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** load default values
*/

#include "./../include/stumper.h"

game_t  *load_default_values(game_t *game)
{
    game->width = WIDTH;
    game->height = HEIGHT;
    game->avatar_one = P_ONE;
    game->avatar_two = P_TWO;
    game->map = NULL;
    game->referee = REFEREE;
    return (game);
}
