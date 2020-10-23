/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** do the player have win
*/

#include "./../include/sokoban.h"

int is_it_win(world_t *world)
{
    int i = 0;

    while (i != world->nb_o) {
        if (world->map[world->o_pos[i][0]][world->o_pos[i][1]] != 'X') {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
