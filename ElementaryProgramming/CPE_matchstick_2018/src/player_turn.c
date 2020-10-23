/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** get player input how many time that is needed
*/

#include "./../include/match.h"

input_t *player_turn(input_t *input, map_t *map)
{
    int check = 0;
    char    *user_inp = NULL;

    my_putstr("\nYour turn:\n");
    while (check != 2) {
        my_putstr("Line: ");
        user_inp = get_input();
        if (user_inp == NULL)
            return (NULL);
        if ((input->rows  = check_input_line(user_inp, map)) != 0) {
            my_putstr("Matches: ");
            user_inp = free_cleanly_this_string(user_inp);
            user_inp = get_input();
            check = check_to_end_player_turn(check , input, map, user_inp);
        }
    }
    if (user_inp == NULL)
        return (NULL);
    user_inp = free_cleanly_this_string(user_inp);
    return (input);
}
