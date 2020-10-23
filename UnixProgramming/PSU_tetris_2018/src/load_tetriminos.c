/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load_tetriminos
*/

#include "./../include/tetris.h"

tetris_t    *load_tetriminos(tetris_t *t)
{
    DIR *fd = opendir("./tetriminos");

    if (fd == NULL) {
        my_pstrerr("Error can't acces tetrimino directory !\n");
        t = free_tetris_struc(t);
        return (t);
    }
    t = find_tetriminos(t, fd);
    if (t != NULL && t->t_list != NULL)
        t = load_each_tetriminos(t);
    closedir(fd);
    return (t);
}