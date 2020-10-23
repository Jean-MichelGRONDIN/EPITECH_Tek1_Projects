/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** init the game vars
*/

#include "./../include/tetris.h"

tetris_t    *initialise_game_vars(int ac, char **av)
{
    tetris_t    *t = init_tetris_with_default_values();

    if (ac > 1) {
        t = init_prog_args_list(ac, av, t);
        if (t != NULL && t->t_list != NULL)
            t = check_loaded_keys(t);
    }
    if (t == NULL)
        return (t);
    if (t != NULL && t->debug != 0)
        print_debug_mode(t);
    t = load_tetriminos(t);
    if (t != NULL && t->debug != 0)
        ask_a_key_to_continue();
    if (t != NULL && t->t_list != NULL)
        t->t_list = remove_wrong_tetriminos(t->t_list);
    if (t != NULL && t->t_list != NULL)
        t = launch_game(t);
    return (t);
}