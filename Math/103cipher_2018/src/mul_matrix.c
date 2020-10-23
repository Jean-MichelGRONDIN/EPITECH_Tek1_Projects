/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** multiplication between two matrices
*/

#include "./../include/cipher.h"

int do_mul(int *line, int cols, code_t *key, int x)
{
    int res = 0;
    int i = 0;

    while (i != cols) {
        res = res + line[i] * key->matrix[i][x];
        i = i + 1;
    }
    return (res);
}

int *mul_this_line(int *line, int cols, code_t *key, int *res)
{
    int i = 0;

    while (i != cols) {
        res[i] = do_mul(line, cols, key, i);
        i = i + 1;
    }
    return (res);
}

int **mul_between_matrix(code_t *key, msg_t *message)
{
    int **res = create_empty_matrix(message->rows, message->cols);
    int i = 0;

    while (i != message->rows) {
        res[i] = mul_this_line(message->msg[i], message->cols, key, res[i]);
        i = i + 1;
    }
    return (res);
}
