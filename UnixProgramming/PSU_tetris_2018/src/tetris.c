/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** first function of the project
*/

#include "./../include/tetris.h"

int tetris(int ac, char **av)
{
    tetris_t    *tetris = NULL;

    if (ac == 2)
        if (my_strcmp(av[1], "--help") == 0) {
            print_usage(av[0]);
            return (0);
        }
    tetris = initialise_game_vars(ac, av);
    if (tetris == NULL)
        return (84);
    tetris = free_tetris_struc(tetris);
    return (0);
}
