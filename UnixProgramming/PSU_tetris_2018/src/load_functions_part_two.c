/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load functiosn part two
*/

#include "./../include/tetris.h"

tetris_t    *k_quit_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_strlen(str) != 1) {
        my_pstrerr("Error the key must be a char !\n");
        t = free_tetris_struc(t);
    } else
        t->k_quit = str[0];
    return (t);
}

tetris_t    *k_pause_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_strlen(str) != 1) {
        my_pstrerr("Error the key must be a char !\n");
        t = free_tetris_struc(t);
    } else
        t->k_pause = str[0];
    return (t);
}

tetris_t    *map_size_load(tetris_t *t, char **av)
{
    char    *str = get_opt_args(av);

    if (str == NULL) {
        my_pstrerr("Error missing argument !\n");
        t = free_tetris_struc(t);
    } else if (my_str_is_int(str) == 0) {
        my_pstrerr("Error the map size must be an integer !\n");
        t = free_tetris_struc(t);
    } else
        if (t->m_height == 20)
            t->m_height = my_getnbr(str);
        else
            t->m_width = my_getnbr(str);
    str = free_cleanly_this_str(str);
    return (t);
}

tetris_t    *without_next_load(tetris_t *t, char **av)
{
    (void)av;
    t->without_next += 1;
    return (t);
}

tetris_t    *debug_load(tetris_t *t, char **av)
{
    (void)av;
    t->debug += 1;
    return (t);
}