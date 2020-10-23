/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** Check if the game is finish
*/

#include "./../include/sokoban.h"

int is_it_finished(world_t *world)
{
    if (is_it_win(world) == 1) {
        return (1);
    } else if (is_it_lose(world) == 1) {
        return (-1);
    } else {
        return (0);
    }
}
