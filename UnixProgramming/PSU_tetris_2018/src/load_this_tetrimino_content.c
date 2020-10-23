/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load_the_tetrimino_content
*/

#include "./../include/tetris.h"

tetrimino_t *load_this_tetrimino_content(tetrimino_t *obj, char *path)
{
    char    *file = read_this_file(path);

    if (file == NULL)
        return (obj);
    obj = load_tetrimino_size_and_color(obj, file);
    if (obj->t_color != -84)
        obj = load_tetrimino_shape(obj, file);
    file = free_cleanly_this_str(file);
    return (obj);
}