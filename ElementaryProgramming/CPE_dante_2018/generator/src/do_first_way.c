/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** do the first way to the exit of the maze
*/

#include "./../include/generator.h"

char    **do_first_way(char **tab, int x, int y)
{
    int value = 0;
    int line = 0;
    int i = 0;
    int mode = nb_alea(0, 1);

    while (line != (y - 1) || i != (x - 1)) {
        if (mode == 0 && i < (x - 1)) {
            value = nb_alea(0, (x - i - 1));
            tab = go_in_line(tab, i, line, value);
            i = i + value;
        }
        if (mode == 1 && line < (y - 1)) {
            value = nb_alea(0, (y - line - 1));
            tab = go_in_row(tab, i, line, value);
            line = line + value;
        }
        mode = mode == 0 ? 1 : 0;
    }
    return (tab);
}
