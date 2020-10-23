/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** alloc a str and put a int in
*/

#include "./../include/runner.h"

int my_intlen(int nb)
{
    int i  = 0;

    if (nb == 0) {
        return (1);
    } else {
        while (nb != 0) {
            nb = nb / 10;
            i = i + 1;
        }
    }
    return (i);
}

char    *int_to_str(int nb)
{
    int len = my_intlen(nb);
    char    *str = malloc(sizeof(char) * (len + 1));
    int i = 0;

    str[len] = '\0';
    if (nb == 0) {
        str[0] = '0';
        return (str);
    }
    while (i != len) {
        str[i] = nb % 10 + 48;
        nb = nb / 10;
        i = i + 1;
    }
    my_revstr(str);
    return (str);
}
