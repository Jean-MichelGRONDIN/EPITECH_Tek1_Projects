/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** find_tetriminos
*/

#include "./../include/tetris.h"

tetris_t    *find_tetriminos(tetris_t *t, DIR *fd)
{
    int nb = 0;
    struct  dirent  *dir = malloc(sizeof(*dir));

    while ((dir = readdir(fd)) != NULL && t != NULL) {
        if (is_a_tetrimino(dir->d_name) == 0) {
            t->t_list = add_to_list(t->t_list, my_strdup(dir->d_name));
            nb = nb + 1;
        }
    }
    if (t != NULL && t->debug != 0)
        my_printf("Tetriminos : %i\n", nb);
    free(dir);
    return (t);
}