/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load_this_tetrimino
*/

#include "./../include/tetris.h"

tetrimino_t *load_this_tetrimino(tetrimino_t *obj, int debug)
{
    char    *path = my_strcat(my_strdup("./tetriminos/"), obj->name);

    obj->name = get_this_tetrimino_name(obj->name);
    obj = load_this_tetrimino_content(obj, path);
    if (debug != 0) {
        my_printf("Tetriminos : Name %s :", obj->name);
        if (obj->shape != NULL) {
            my_printf(" Size %i*%i : Color %i :\n",
            obj->t_width, obj->t_height, obj->t_color);
            my_show_word_array(obj->shape, "\n");
        } else {
            my_printf(" Error\n");
        }
    }
    path = free_cleanly_this_str(path);
    return (obj);
}