/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** if it is_a_tetrimino return 0 and else 1
*/

#include "./../include/tetris.h"

int is_a_tetrimino(char *str)
{
    char    **tab = my_str_to_word_array(str, ".");
    int res = 1;

    if (my_strtab_len(tab) == 2)
        if (my_strcmp(tab[1], "tetrimino") == 0)
            res = 0;
    tab = free_cleanly_str_tab(tab);
    return (res);
}