/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** reverse a matrix for decrypt a message
*/

#include "./../include/cipher.h"

void    divide_this_line_by_tmp(code_t *key, float **idnt, float tmp, int line)
{
    int i = 0;

    while (i != key->nb_line) {
        key->res_rev[line][i] = key->res_rev[line][i] / tmp;
        i = i + 1;
    }
    if (tmp != 0) {
        i = 0;
        while (i != key->nb_line) {
            idnt[line][i] = idnt[line][i] / tmp;
            i = i + 1;
        }
    }
}

void    processe_to_get_zero(code_t *key, float **idnt, int line, index_t *i)
{
    int i_c  = 0;
    float   tmp  = 0;
    float   remember = key->res_rev[line][i->cols];


    while (i_c != key->nb_line) {
        tmp = key->res_rev[i->rows][i_c] * remember;
        key->res_rev[line][i_c] = key->res_rev[line][i_c] - tmp;
        i_c = i_c + 1;
    }
    i_c = 0;
    while (i_c != key->nb_line) {
        tmp = idnt[i->rows][i_c] * remember;
        idnt[line][i_c] = idnt[line][i_c] - tmp;
        i_c = i_c + 1;
    }
}

code_t  *processe_this_columb(code_t *key, float **identity, index_t *i)
{
    int i_l = 0;
    float   tmp = key->res_rev[i->rows][i->cols];

    divide_this_line_by_tmp(key, identity, tmp, i->rows);
    while (i_l != key->nb_line) {
        if (i_l != i->rows) {
            processe_to_get_zero(key, identity, i_l, i);
        }
        i_l = i_l + 1;
    }
    return (key);
}

code_t  *reverse_the_key_matrix(code_t *key)
{
    index_t *i = initialise_an_index(0, 0);
    float   **identity = create_identity_matrix(key->nb_line);

    key = copy_key_in_res_rev(key);
    while (i->rows != key->nb_line) {
        key = processe_this_columb(key, identity, i);
        i->cols = i->cols + 1;
        i->rows = i->rows + 1;
    }
    key->res_rev = identity;
    return (key);
}
