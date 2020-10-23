/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** generation part then drow it
*/

#include "./../include/generator.h"

void    generate_maze(int x, int y, int perfect)
{
    char    **tab = init_tab(y, x);
    int i = 0;

    srand(time(NULL));
    tab = do_first_way(tab, x, y);
    tab = line_mazing(tab, y);
    if (perfect == 0) {
        tab = empty_square_mazing(tab, x, y);
        tab = empty_square_mazing(tab, x, y);
        tab = empty_square_mazing(tab, x, y);
    }
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        if (tab[i + 1] != NULL)
            my_putchar('\n');
        i = i + 1;
    }
    tab = free_cleanly_str_tab(tab);
}
