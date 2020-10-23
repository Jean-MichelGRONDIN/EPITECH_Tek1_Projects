/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** check if 4 same char around
*/

#include "./../include/stumper.h"

int check_left(game_t *game, int line, int col, char c)
{
    int nb = 0;
    int i = col;

    while (game->map[line][i] != '\0' && game->map[line][i] == c) {
        nb = nb + 1;
        i = i + 1;
    }
    if (nb >= 4) {
        i = col;
        while (game->map[line][i] != '\0' && game->map[line][i] == c) {
            game->map[line][i] = game->referee;
            i = i + 1;
        }
        return (1);
    }
    return (-1);
}

int check_top(game_t *game, int line, int col, char c)
{
    int nb = 0;
    int i = line;

    while (i >= 0 && game->map[i][col] == c) {
        nb = nb + 1;
        i = i - 1;
    }
    if (nb >= 4) {
        i = line;
        while (i >= 0 && game->map[i][col] == c) {
            game->map[i][col] = game->referee;
            i = i - 1;
        }
        return (1);
    }
    return (-1);
}

int check_top_right(game_t *game, int line, int col, char c)
{
    int nb = 0;
    int l = line;
    int i = col;

    while (l >= 0 && game->map[l][i] != '\0' && game->map[l][i] == c) {
        nb = nb + 1;
        i = i + 1;
        l = l - 1;
    }
    if (nb >= 4) {
        l = line;
        i = col;
        while (l >= 0 && game->map[l][i] != '\0' && game->map[l][i] == c) {
            game->map[l][i] = game->referee;
            i = i + 1;
            l = l - 1;
        }
        return (1);
    }
    return (-1);
}

int check_top_left(game_t *game, int line, int col, char c)
{
    int nb = 0;
    int l = line;
    int i = col;

    while (l >= 0 && i >= 0 && game->map[l][i] == c) {
        nb = nb + 1;
        i = i - 1;
        l = l - 1;
    }
    if (nb >= 4) {
        l = line;
        i = col;
        while (l >= 0 && i >= 0 && game->map[l][i] == c) {
            game->map[l][i] = game->referee;
            i = i - 1;
            l = l - 1;
        }
        return (1);
    }
    return (-1);
}
