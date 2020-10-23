/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** init vars from args
*/

#include "./../include/tetris.h"

tetris_t    *init_prog_args_list(int ac, char **av, tetris_t *t)
{
    struct  option  check_opts[11] = {
        {"level=", required_argument, 0, 'L'},
        {"key-left=", required_argument, 0, 'l'},
        {"key-right=", required_argument, 0, 'r'},
        {"key-turn=", required_argument, 0, 't'},
        {"key-drop=", required_argument, 0, 'd'},
        {"key-quit=", required_argument, 0, 'q'},
        {"key-pause=", required_argument, 0, 'p'},
        {"without-next", no_argument, 0, 'w'},
        {"debug", no_argument, 0, 'D'},
        {"map-size=", required_argument, 0, '*'},
        {0, 0, 0, 0}
    };
    return (init_from_args(ac, av, t, check_opts));
}

tetris_t    *init_from_args(int ac, char **av, tetris_t *t, struct option *op)
{
    int ret = 0;
    char    opt[19] = "L:l:r:t:d:q:p:*:wD";
    int end = 0;
    char    *order = NULL;

    while (end == 0 && (ret = getopt_long(ac, av, opt, op, NULL)) != -1) {
        if (ret == '?') {
            end = 1;
            t = free_tetris_struc(t);
        }
        order = my_char_str_cat(order, ret);
    }
    t = load_settings_from_args(av, t, order);
    order = free_cleanly_this_str(order);
    return (t);
}