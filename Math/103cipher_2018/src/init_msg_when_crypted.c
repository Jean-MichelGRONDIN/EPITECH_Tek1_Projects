/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** initialise message when it's crypted
*/

#include "./../include/cipher.h"

int find_nb_elements(char *str)
{
    int i  = 0;
    int res = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            res = res + 1;
        }
        i = i + 1;
    }
    res = res + 1;
    return (res);
}

int place_crypted_value(char *str, int *i)
{
    int tmp = 0;
    int len = find_nb_elements(str);

    if (*i != len) {
        tmp = strtol(str, NULL, 10);
        *i = *i + 1;
        return (tmp);
    } else {
        return (0);
    }
}

int **alloc_and_fill_when_crypted(char *str, int row, int col, int len)
{
    int **msg = alloc_msg_matrix(row, col);
    index_t *i = initialise_an_index(1, 0);
    int i_c = 0;
    char    *pos;

    msg[i->rows][0] = strtol(str, &pos, 10);
    while (i->rows != row) {
        while (i->cols != col) {
            msg[i->rows][i->cols] = i_c != len ? strtol(pos, &pos, 10) : 0;
            i->cols = i->cols + 1;
        }
        i->cols = 0;
        i->rows = i->rows + 1;
    }
    return (msg);
}

msg_t   *init_msg_when_crypted(char *s, int nb_cols)
{
    msg_t   *m = malloc(sizeof(*m));
    int len = find_nb_elements(s);

    m->cols = nb_cols;
    m->rows = find_nb_line_for_matrix(len, nb_cols);
    m->msg = alloc_and_fill_when_crypted(s, m->rows, nb_cols, len);
    m->str = s;
    return (m);
}
