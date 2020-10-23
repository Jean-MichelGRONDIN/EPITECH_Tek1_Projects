/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** load game and check if user input something right
*/

#include "./../include/stumper.h"

game_t  *load_check_game(int ac, char **av)
{
    game_t  *game = malloc(sizeof(*game));
    int i = 0;

    game = load_default_values(game);
//    if (ac != 1)
//        while (i != ac) {
//            game = check_arg(av[i], game);
//        }
    game = load_map(game);
    return (game);
}
