/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** check if someone win or if it s a tie loose
*/

#include "./../include/stumper.h"

int check_end(game_t *game)
{
    int winner = -1;
    
    if ((winner = find_four_aligned(game)) != -1) {
        my_printf("Congrats, player %c won!\n", winner);
        return (0);
    }
    if (nb_free_spaces_in_map(game->map) == 0) {
        my_putstr("It's a tie, nobody wins.\n");
        return (0);
    }
    return (-1);
}
