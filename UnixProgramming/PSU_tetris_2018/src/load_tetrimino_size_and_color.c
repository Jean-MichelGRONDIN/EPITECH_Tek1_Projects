/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** load_tetrimino_size_and_color
*/

#include "./../include/tetris.h"

int check_tetrimino_first_line(char **tab)
{
    int n = 0;

    if (my_strtab_len(tab) != 3)
        return (1);
    n = my_getnbr(tab[0]);
    if (n < 1)
        return (1);
    n = my_getnbr(tab[1]);
    if (n < 1)
        return (1);
    return (0);
}

tetrimino_t *load_tetrimino_size_and_color(tetrimino_t *obj, char *file)
{
    int n = count_until_line_finisher(file, "\n");
    char    *first_line = my_strndup(file, n);
    char    **tab = my_str_to_word_array(first_line, " \t");

    if (check_tetrimino_first_line(tab) == 0) {
        obj->t_width = my_getnbr(tab[0]);
        obj->t_height = my_getnbr(tab[1]);
        obj->t_color = my_getnbr(tab[2]);
    } else
        obj->t_color = -84;
    first_line = free_cleanly_this_str(first_line);
    tab = free_cleanly_str_tab(tab);
    return (obj);
}