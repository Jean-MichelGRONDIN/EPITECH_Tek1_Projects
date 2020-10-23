/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** game_user_input
*/

#include "./../include/stumper.h"

game_t *place_char(game_t *game, int number, char c)
{
    int i = 0;

    while (game->map[i] != NULL && game->map[i][number - 1] == '.') {
        i = i + 1;
    }
    i = i - 1;
    game->map[i][number - 1] = c;
    return (game);
}

int check_user_input(char *str, int width)
{
    int number = 0;

    if (str == NULL)
        return (0);
    if (my_strlen(str) != 1)
        return (0);
    if (my_str_is_int(str) == 0)
        return (0);
    number = my_getnbr(str);
    if (number < 1 || number > width)
        return (0);
    return (number);
}

game_t  *get_user_input(game_t *game, int player)
{
    char    *line = NULL;
    size_t  n = 0;
    int number = 0;
    char    c = player == ONE ? game->avatar_one : game->avatar_two;

    while ((number = check_user_input(line, game->width)) == 0) {
        my_printf("Player %c, xhere do you want to play: ", c);
        line = free_cleanly_this_str(line);
        getline(&line, &n, stdin);
        number = my_getnbr(line);
        if (line == NULL || line[0] == '\0') {
            game = free_game(game);
            return (game);
        }
        if (line[0] != '\n')
            line[my_strlen(line) - 1] = '\0';
    }
    place_char(game, number, c);
    return (game);
}
