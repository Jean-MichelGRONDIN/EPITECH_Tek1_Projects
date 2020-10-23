/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** the loop of the game
*/

#include "./../include/sokoban.h"

void    game_loop(world_t *world)
{
    int ch;
    int x = 0;

    print_map(world);
    refresh();
    while (is_it_finished(world) == 0 && (ch = getch()) != 'q') {
        world = manage_entrie(world, ch);
        refresh();
    }
    if ((x = is_it_finished(world)) != 0) {
        print_end(x);
    }
}
