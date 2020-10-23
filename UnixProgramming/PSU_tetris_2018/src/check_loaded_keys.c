/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** check if the are 2 same bind on a key
*/

#include "./../include/tetris.h"

int check_two_time_same_key(char *str, int index)
{
    int i = index + 1;

    while (str[i] != '\0') {
        if (str[i] == str[index])
            return (1);
        i = i + 1;
    }
    return (0);
}

char    *init_actual_key_list(tetris_t *t)
{
    char    *new = malloc(sizeof(char) * (6 + 1));

    new[0] = t->k_drop;
    new[1] = t->k_left;
    new[2] = t->k_pause;
    new[3] = t->k_quit;
    new[4] = t->k_right;
    new[5] = t->k_turn;
    new[6] = '\0';
    return (new);
}

tetris_t    *check_loaded_keys(tetris_t *t)
{
    int i = 0;
    char    *str = init_actual_key_list(t);

    while (t != NULL && str[i] != '\0') {
        if (check_two_time_same_key(str, i) == 1) {
            my_pstrerr("Error two action are bind on the same key !\n");
            t = free_tetris_struc(t);
        }
        i = i + 1;
    }
    str = free_cleanly_this_str(str);
    return (t);
}