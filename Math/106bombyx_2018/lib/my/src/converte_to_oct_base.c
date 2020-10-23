/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** converte a number in base octale and display it
*/

#include <stdlib.h>
#include "./../include/my.h"

int find_nb_max_char(int nb)
{
    int nb_char = 0;

    while (nb > 0) {
        nb = nb / 8;
        nb_char = nb_char + 1;
    }
    return (nb_char);
}

void    converte_to_oct_base(int nb, int slash)
{
    char    *res = malloc(sizeof(char) * (find_nb_max_char(nb) + 1));
    int i = 0;

    if (slash != 0) {
        my_putchar('\\');
        if (nb < 64) {
            my_putchar('0');
        }
        if (nb < 8) {
            my_putchar('0');
        }
    }
    while (nb != 0) {
        res[i] = ((nb % 8) + 48);
        nb = nb / 8;
        i = i + 1;
    }
    res[i] = '\0';
    res = my_revstr(res);
    my_putstr(res);
}

void    even_non_printable_char(char *str)
{
    int i = 0;

    while (i != my_strlen(str)) {
        if (str[i] < 32 || str[i] >= 127) {
            converte_to_oct_base(str[i], 1);
        } else {
            my_putchar(str[i]);
        }
        i = i + 1;
    }
}
