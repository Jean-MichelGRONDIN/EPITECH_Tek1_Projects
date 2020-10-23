/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load the game settings from args
*/

#include "./../include/tetris.h"

args_actions_t  **free_args_action(args_actions_t **list)
{
    int i = 0;

    if (list == NULL)
        return (list);
    while (list[i] != NULL) {
        free(list[i]);
        list[i] = NULL;
        i = i + 1;
    }
    free(list);
    list = NULL;
    return (list);
}

args_actions_t  **init_args_action_part_two(args_actions_t **list)
{
    list[4]->letter = 'd';
    list[4]->func = &k_drop_load;
    list[5]->letter = 'q';
    list[5]->func = &k_quit_load;
    list[6]->letter = 'p';
    list[6]->func = &k_pause_load;
    list[7]->letter = 'w';
    list[7]->func = &without_next_load;
    list[8]->letter = 'D';
    list[8]->func = &debug_load;
    list[9]->letter = '*';
    list[9]->func = &map_size_load;
    return (list);
}

args_actions_t  **init_args_action(void)
{
    int nb = 10;
    args_actions_t  **list = malloc(sizeof(*list) * (nb + 1));
    int i = 0;

    while (i != nb) {
        list[i] = malloc(sizeof(**list));
        i = i + 1;
    }
    list[nb] = NULL;
    list[0]->letter = 'L';
    list[0]->func = &level_load;
    list[1]->letter = 'l';
    list[1]->func = &k_left_load;
    list[2]->letter = 'r';
    list[2]->func = &k_right_load;
    list[3]->letter = 't';
    list[3]->func = &k_turn_load;
    list = init_args_action_part_two(list);
    return (list);
}

tetris_t    *get_that_arg(char **av, tetris_t *t,
    args_actions_t **list, char a)
{
    int i = 0;

    while (list[i] != NULL) {
        if (list[i]->letter == a) {
            t = list[i]->func(t, av);
            return (t);
        }
        i = i + 1;
    }
    return (t);
}

tetris_t    *load_settings_from_args(char **av, tetris_t *t, char *order)
{
    args_actions_t  **list = init_args_action();
    int i = 0;

    if (av[optind] != NULL) {
        my_pstrerr("Error wrong argument(s) detected !\n");
        list = free_args_action(list);
        return (free_tetris_struc(t));
    }
    while (order != NULL && optind != 0)
        optind -= 1;
    optind += 1;
    while (order != NULL && order[i] != '\0' && t != NULL) {
        t = get_that_arg(av, t, list, order[i]);
        if (av[optind] != NULL)
            optind += 1;
        i = i + 1;
    }
    list = free_args_action(list);
    return (t);
}
