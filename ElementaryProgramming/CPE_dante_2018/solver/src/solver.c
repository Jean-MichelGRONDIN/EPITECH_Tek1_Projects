/*
** EPITECH PROJECT, 2019
** soleve
** File description:
** solve
*/

#include "my.h"
#include "solver.h"

char **next_move(char **tab, int *ly, int *lx, int *stat)
{
    int y = (*ly);
    int x = (*lx);

    if (my_end(tab, y, x) != 1 && y - 1 >= 0 && tab[y - 1][x] == '*') {
        tab[--y][x] = 'o';
        tab = move_in_lab(tab, y, x, stat);
        y++;
    } else if (my_end(tab, y, x) != 1 && x - 1 >= 0 && tab[y][x - 1] == '*') {
        tab[y][--x] = 'o';
        tab = move_in_lab(tab, y, x, stat);
        x++;
    }
    (*ly) = y;
    (*lx) = x;
    return (tab);
}

char **stat_to_back(char **tab, int y, int x, int *stat)
{
    if ((*stat) == 0 && my_around(tab, y, x) != 1 && my_end(tab, y, x) != 1) {
        tab[y][x] = '2';
    } else if ((*stat) == 0 && my_around(tab, y, x) == 1 &&
                my_end(tab, y, x) != 1)
        tab = move_in_lab(tab, y, x, stat);
    else
        (*stat) = 1;
    return (tab);
}

char **move_in_lab(char **tab, int y, int x, int *stat)
{
    if (my_end(tab, y, x) != 1 && tab[y][x + 1] == '*') {
        tab[y][++x] = 'o';
        tab = move_in_lab(tab, y, x, stat);
        x--;
    } else if (my_end(tab, y, x) != 1 && tab[y + 1] != NULL &&
                tab[y + 1][x] == '*') {
        tab[++y][x] = 'o';
        tab = move_in_lab(tab, y, x, stat);
        y--;
    } else
        next_move(tab, &y, &x, stat);
    tab = stat_to_back(tab, y, x, stat);
    return (tab);
}

char **solver(char **tab)
{
    int stat = 0;

    tab[0][0] = 'o';
    tab = move_in_lab(tab, 0, 0, &stat);
    return (tab);
}
