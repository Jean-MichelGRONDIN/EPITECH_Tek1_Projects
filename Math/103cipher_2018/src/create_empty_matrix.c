/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** create a mtrix empty of size given as argument
*/

#include "./../include/cipher.h"

int *fill_with_special_nb(int *tab, int cols, int x)
{
    int i = 0;

    while (i != cols) {
        tab[i] = x;
        i = i + 1;
    }
    return (tab);
}

int **create_empty_matrix(int lines, int cols)
{
    int **tab = malloc(sizeof(int *) * lines);
    int i = 0;

    while (i != lines) {
        tab[i] = malloc(sizeof(int) * cols);
        tab[i] = fill_with_special_nb(tab[i], cols, 0);
        i = i + 1;
    }
    return (tab);
}
