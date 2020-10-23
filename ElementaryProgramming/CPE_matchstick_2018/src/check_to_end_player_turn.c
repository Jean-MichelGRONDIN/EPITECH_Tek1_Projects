/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** check that if we can end player turn
*/

#include "./../include/match.h"

int check_to_end_player_turn(int check, input_t *input,
    map_t *map, char *user_inp)
{
    if (user_inp == NULL)
        return (2);
    if ((input->nb = check_input_matches(user_inp, map, input->rows)) != 0) {
        check = 2;
    } else
        check = 0;
    return (check);
}
