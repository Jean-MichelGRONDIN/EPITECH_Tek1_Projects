/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load functions part one
*/

#include "./../include/tetris.h"

tetris_t    *level_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_str_is_int(str) == 0) {
        my_pstrerr("Error the level must be an integer !\n");
        t = free_tetris_struc(t);
    } else
        t->level = my_getnbr(str);
    return (t);
}

tetris_t    *k_left_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_strlen(str) != 1) {
        my_pstrerr("Error the key must be a char !\n");
        t = free_tetris_struc(t);
    } else
        t->k_left = str[0];
    return (t);
}

tetris_t    *k_right_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_strlen(str) != 1) {
        my_pstrerr("Error the key must be a char !\n");
        t = free_tetris_struc(t);
    } else
        t->k_right = str[0];
    return (t);
}

tetris_t    *k_turn_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_strlen(str) != 1) {
        my_pstrerr("Error the key must be a char !\n");
        t = free_tetris_struc(t);
    } else
        t->k_turn = str[0];
    return (t);
}

tetris_t    *k_drop_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_strlen(str) != 1) {
        my_pstrerr("Error the key must be a char !\n");
        t = free_tetris_struc(t);
    } else
        t->k_drop = str[0];
    return (t);
}