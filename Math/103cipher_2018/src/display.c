/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** display functions
*/

#include "./../include/cipher.h"

void    print_matrix_key(code_t *key)
{
    index_t *i = initialise_an_index(0, 0);

    printf("Key matrix:\n");
    while (i->rows != key->nb_line) {
        while (i->cols != key->nb_line) {
            printf("%d", key->matrix[i->rows][i->cols]);
            print_matrix_spaces(i->cols, (key->nb_line - 1));
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
    printf("\n");
}

void    print_matrix_msg(msg_t *m)
{
    index_t *i = initialise_an_index(0, 0);

    printf("Encrypted message:\n");
    while (i->rows != m->rows) {
        while (i->cols != m->cols) {
            printf("%d", m->msg[i->rows][i->cols]);
            crypted_msg_spaces(i->rows, (m->rows - 1), i->cols, (m->cols - 1));
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
}

void    print_uncrypted_char(msg_t *m, index_t *i)
{
    if (m->msg[i->rows][i->cols] != 0) {
        printf("%c", m->msg[i->rows][i->cols]);
    }
}

void    print_matrix_msg_decrypted(msg_t *m)
{
    index_t *i = initialise_an_index(0, 0);

    printf("Encrypted message:\n");
    while (i->rows != m->rows) {
        while (i->cols != m->cols) {
            print_uncrypted_char(m, i);
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
    printf("\n");
}

void    print_identity_matrix(float **matrix, int size)
{
    index_t *i = initialise_an_index(0, 0);

    printf("Key matrix:\n");
    while (i->rows != size) {
        while (i->cols != size) {
            printf("%.3f", matrix[i->rows][i->cols]);
            print_matrix_spaces(i->cols, (size - 1));
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
    printf("\n");
}
