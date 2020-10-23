/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** check if there is 4 char aligned and if yes return this char else return -1
*/

#include "./../include/stumper.h"

int check_if_four_aligned(game_t *game, int line, int col, char c)
{
    if (game->map[line][col] == '.')
        return (-1);
    if (check_left(game, line, col, c) == 1)
        return (1);
    if (check_top(game, line, col, c) == 1)
        return (1);
    if (check_top_left(game, line, col, c) == 1)
        return (1);
    if (check_top_right(game, line, col, c) == 1)
        return (1);
    return (-1);
}

int find_four_aligned(game_t *game)
{
    int i_line = 0;
    int i = 0;
    int find = -1;
    int c = 0;

    while (game->map[i_line] != NULL) {
        while (game->map[i_line][i] != '\0' && find == -1) {
            c = game->map[i_line][i];
            find = check_if_four_aligned(game, i_line, i, c);
            i = i + 1;
        }
        if (find != -1)
            return (c);
        i = 0;
        i_line = i_line + 1;
    }
    return (-1);
}
