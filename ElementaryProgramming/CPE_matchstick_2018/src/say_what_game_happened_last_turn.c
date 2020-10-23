/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** write the sentence that say what happen last turn
*/

#include "./../include/match.h"

void    say_what_happened_last_turn(input_t *input, int player)
{
    if (player == USER) {
        my_putstr("Player removed ");
        my_put_nbr(input->nb);
        my_putstr(" match(es) from line ");
        my_put_nbr(input->rows);
        my_putchar('\n');
    } else {
        my_putstr("AI removed ");
        my_put_nbr(input->nb);
        my_putstr(" match(es) from line ");
        my_put_nbr(input->rows);
        my_putchar('\n');
    }
}
