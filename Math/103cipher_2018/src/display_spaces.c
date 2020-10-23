/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** print spaces for display functions
*/

#include "./../include/cipher.h"

void    print_matrix_spaces(int i, int line)
{
    if (i != line) {
        printf("   ");
    } else {
        printf("\n");
    }
}

void    crypted_msg_spaces(int l, int l_max, int c, int c_max)
{
    if (l == l_max && c == c_max) {
        printf("\n");
    } else {
        printf(" ");
    }
}
