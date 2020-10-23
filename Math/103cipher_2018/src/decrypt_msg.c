/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** function that decrypt the msg
*/

#include "./../include/cipher.h"

float   **alloc_float_msg_matrix(int rows, int cols)
{
    float   **msg = malloc(sizeof(float *) * rows);
    int i  = 0;

    while (i != rows) {
        msg[i] = malloc(sizeof(float) * cols);
        i = i + 1;
    }
    return (msg);
}

float   decrypt_this_number(int *line, int cols, code_t *key, int x)
{
    float   res = 0;
    int i = 0;

    while (i != cols) {
        res = res + line[i] * key->res_rev[i][x];
        i = i + 1;
    }
    return (res);
}

float   *decrypt_this_line(int *line, int cols, code_t *key, float *res)
{
    int i = 0;

    while (i != cols) {
        res[i] = decrypt_this_number(line, cols, key, i);
        i = i + 1;
    }
    return (res);
}

void    set_to_int(msg_t *message, float **res)
{
    index_t *i = initialise_an_index(0, 0);

    while (i->rows != message->rows) {
        while (i->cols != message->cols) {
            res[i->rows][i->cols] = round(res[i->rows][i->cols]);
            message->msg[i->rows][i->cols] = res[i->rows][i->cols];
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
}

msg_t   *decrypt_msg(code_t *key, msg_t *m)
{
    float   **res = alloc_float_msg_matrix(m->rows, m->cols);
    int i = 0;

    while (i != m->rows) {
        res[i] = decrypt_this_line(m->msg[i], m->cols, key, res[i]);
        i = i + 1;
    }
    set_to_int(m, res);
    return (m);
}
