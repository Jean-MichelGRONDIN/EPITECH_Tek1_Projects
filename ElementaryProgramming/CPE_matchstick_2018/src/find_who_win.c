/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** find who win and print a message linked to him
*/

#include "./../include/match.h"

int find_who_win(int player)
{
    if (player == USER) {
        my_putstr("You lost, too bad...\n");
        return (AI);
    }
    my_putstr("I lost... snif... but I'll get you next time!!\n");
    return (USER);
}
