/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_2018
** File description:
** alloc a string capable of containt str a and str b
*/

#include <stdlib.h>
#include "./../include/my.h"
#include "./../include/bootstrap.h"

char    **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    int i = 0;
    char    **tab = malloc(sizeof(char *) * (nb_rows + 1));

    while (i != (nb_rows + 1)) {
        tab[i] = malloc(sizeof(char) * (nb_cols + 2));
        tab[i] = my_memset(tab[i], '~', nb_cols);
        tab[i][nb_cols + 1] = '\0';
        i = i + 1;
    }
    tab[nb_rows] = NULL;
    return (tab);
}
