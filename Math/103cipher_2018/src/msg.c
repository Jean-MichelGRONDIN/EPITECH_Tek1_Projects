/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** load the msg in a matrix
*/

#include "./../include/cipher.h"

int find_nb_line_for_matrix(int nb_ints, int int_by_line)
{
    int i = 1;

    while ((i * int_by_line) < nb_ints) {
        i = i + 1;
    }
    return (i);
}

int **alloc_msg_matrix(int rows, int cols)
{
    int **msg = malloc(sizeof(int *) * rows);
    int i  = 0;

    while (i != rows) {
        msg[i] = malloc(sizeof(int) * cols);
        i = i + 1;
    }
    return (msg);
}

int place_the_value(char *str, int *i)
{
    int tmp = 0;

    if (str[*i] != '\0') {
        tmp = str[*i];
        *i = *i + 1;
        return (tmp);
    } else {
        return (0);
    }
}

int **alloc_and_fill_msg_matrix(char *str, int row, int col)
{
    int **msg = alloc_msg_matrix(row, col);
    index_t *i = initialise_an_index(0, 0);
    int i_c = 0;

    while (i->rows != row) {
        while (i->cols != col) {
            msg[i->rows][i->cols] = place_the_value(str, &i_c);
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
    return (msg);
}

msg_t   *initialise_msg(char *s, int nb_cols)
{
    msg_t   *m = malloc(sizeof(*m));
    int len = my_strlen(s);

    m->cols = nb_cols;
    m->rows = find_nb_line_for_matrix(len, nb_cols);
    m->msg = alloc_and_fill_msg_matrix(s, m->rows, nb_cols);
    m->str = s;
    return (m);
}
