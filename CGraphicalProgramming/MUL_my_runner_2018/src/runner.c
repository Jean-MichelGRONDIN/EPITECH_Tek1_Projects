/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** first funtion of the prog
*/

#include "./../include/runner.h"

int runner(int ac, char **av)
{
    if (ac != 2) {
        return (84);
    }
    if (my_strcmp(av[1], "-h") == 0) {
        display_the_usage();
        return (0);
    }
    if (my_strcmp(av[1], "-i") == 0) {
        launch_game_infinite_mode();
        return (0);
    }
    return (load_map_from_file(av[1]));
}
