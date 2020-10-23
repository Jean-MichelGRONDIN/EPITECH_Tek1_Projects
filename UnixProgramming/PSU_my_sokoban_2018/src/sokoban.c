/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** first function of the prog
*/

#include "./../include/sokoban.h"

int sokoban(int ac, char **av)
{
    world_t *world;

    if (ac != 2) {
        write(2, "Wrong argument(s).\n", 19);
        return (84);
    }
    if (my_strcmp(av[1], "-h") == 0) {
        print_usage();
        return (0);
    }
    world = initialise_the_map(av[1]);
    check_objects_errors(world);
    create_win();
    game_loop(world);
    endwin();
    return (1);
}
