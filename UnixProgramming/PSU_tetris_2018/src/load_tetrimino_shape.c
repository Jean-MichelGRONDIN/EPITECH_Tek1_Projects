/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load_tetrimino_shape
*/

#include "./../include/tetris.h"

char    *check_this_line(char *line, int width)
{
    int len = my_strlen(line);
    int i = 0;
    char    *tmp = NULL;

    line = my_revstr(line);
    i = count_until_not_line_finisher(line, " ");
    line = my_revstr(line);
    tmp = my_strndup(line, (len - i));
    line = free_cleanly_this_str(line);
    line = tmp;
    if ((len - i) > width)
        line = free_cleanly_this_str(line);
    return (line);
}

char    **check_shape(char **shape, int heigth, int width)
{
    int i = 0;

    if (my_strtab_len(shape) != heigth)
        shape = free_cleanly_str_tab(shape);
    while (shape != NULL && shape[i] != NULL) {
        if ((shape[i] = check_this_line(shape[i], width)) == NULL)
            shape = free_cleanly_str_tab(shape);
        i = i + 1;
    }
    return (shape);
}

tetrimino_t *load_tetrimino_shape(tetrimino_t *obj, char *file)
{
    char    *str = NULL;
    int n = count_until_line_finisher(file, "\n");

    n = n + count_until_not_line_finisher(&(file[n]), "\n");
    str = my_strdup(&(file[n]));
    obj->shape = my_str_to_word_array(str, "\n");
    str = free_cleanly_this_str(str);
    obj->shape = check_shape(obj->shape, obj->t_height, obj->t_width);
    return (obj);
}