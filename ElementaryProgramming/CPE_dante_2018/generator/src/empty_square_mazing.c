/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** make a hole of the size of a square border in the maze
*/

#include "./../include/generator.h"

char    **empty_square_mazing(char **tab, int x, int y)
{
    int line = nb_alea(1, y - 1);
    int i = nb_alea(1, x - 1);
    int l_long = nb_alea(1, y - line - 1);
    int i_long = nb_alea(1, x - i - 1);

    tab = go_in_line(tab, i, line, i_long);
    tab = go_in_line(tab, i, line + l_long, i_long);
    tab = go_in_row(tab, i, line, l_long);
    tab = go_in_row(tab, i + i_long, line, l_long);
    return (tab);
}
