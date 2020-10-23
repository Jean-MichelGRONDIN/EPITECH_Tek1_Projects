/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** load the map thank to the width and height
*/

#include "./../include/stumper.h"

char    **init_map(int width, int height)
{
    char    **map = malloc(sizeof(char *) * (height + 1));
    int i = 0;

    while (i != height) {
        map[i] = malloc(sizeof(char) * (width + 1));
        map[i] = my_memset(map[i], '.', width);
        map[i][width] = '\0';
        i = i + 1;
    }
    map[i] = NULL;
    return (map);
}

game_t  *load_map(game_t *game)
{
    game->map = init_map(game->width, game->height);
    return (game);
}
