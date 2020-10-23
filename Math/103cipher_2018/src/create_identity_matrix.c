/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** create an identity square matrix of given size
*/

#include "./../include/cipher.h"

float   **alloc_identity_matrix(int size)
{
    int i  = 0;
    float   **tab = malloc(sizeof(float *) * size);

    while (i != size) {
        tab[i] = malloc(sizeof(float) * size);
        i = i + 1;
    }
    return (tab);
}

float   fill_with_identity_number(int i_l, int i_c)
{
    if (i_l == i_c) {
        return (1);
    }
    return (0);
}

float   **create_identity_matrix(int size)
{
    int i = 0;
    int i_c = 0;
    float   **tab = alloc_identity_matrix(size);

    while (i != size) {
        while (i_c != size) {
            tab[i][i_c] = fill_with_identity_number(i, i_c);
            i_c = i_c + 1;
        }
        i_c = 0;
        i = i + 1;
    }
    return (tab);
}
