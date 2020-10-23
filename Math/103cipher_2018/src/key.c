/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** function linked to the the key
*/

#include "./../include/cipher.h"

int find_matrix_size(char *str)
{
    int len = my_strlen(str);
    int i = 1;

    while (pow(i, 2) < len) {
        i = i + 1;
    }
    return (i);
}

int **malloc_int_tab(int **tab, int size)
{
    int i = 0;

    while (i != size) {
        tab[i] = malloc(sizeof(int) * size);
        i = i + 1;
    }
    return (tab);
}

int place_characters(char *str, int *i)
{
    int nb = 0;

    if (str[*i] == '\0') {
        return (0);
    } else {
        nb = str[*i];
        *i = *i + 1;
        return (nb);
    }
}

code_t   *fill_key_matrix(code_t *key, char *str)
{
    index_t   *index = malloc(sizeof(*index));
    int size = key->nb_line;
    int i = 0;

    index->cols = 0;
    index->rows = 0;
    while (index->rows != size) {
        while (index->cols != size) {
            key->matrix[index->rows][index->cols] = place_characters(str, &i);
            index->cols = index->cols + 1;
        }
        index->rows = index->rows + 1;
        index->cols = 0;
    }
    return (key);
}

code_t   *initialise_key(char *str)
{
    code_t   *key = malloc(sizeof(*key));

    key->nb_line = find_matrix_size(str);
    key->matrix = malloc(sizeof(int *) * key->nb_line);
    key->matrix = malloc_int_tab(key->matrix, key->nb_line);
    key = fill_key_matrix(key, str);
    key->res_rev = create_identity_matrix(key->nb_line);
    return (key);
}
