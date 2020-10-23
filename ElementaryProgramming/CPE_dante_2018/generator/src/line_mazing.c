/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** do some line on 1 on 2 to make it like a maze
*/

#include "./../include/generator.h"

char    **line_mazing(char **tab, int y)
{
    int i = 1;
    int mode = 0;

    while (tab[0][i] != '\0') {
        if (mode == 0)
            go_in_row(tab, i, 0, y - 1);
        mode = mode == 0 ? 1 : 0;
        i = i + 1;
    }
    return (tab);
}
