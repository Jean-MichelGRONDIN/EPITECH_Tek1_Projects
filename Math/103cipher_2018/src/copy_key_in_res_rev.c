/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** copy the key matrice in the res_rev
*/

#include "./../include/cipher.h"

code_t  *copy_key_in_res_rev(code_t *key)
{
    int i  = 0;
    int i_c = 0;

    while (i != key->nb_line) {
        while (i_c != key->nb_line) {
            key->res_rev[i][i_c] = key->matrix[i][i_c];
            i_c = i_c + 1;
        }
        i_c = 0;
        i = i + 1;
    }
    return (key);
}
