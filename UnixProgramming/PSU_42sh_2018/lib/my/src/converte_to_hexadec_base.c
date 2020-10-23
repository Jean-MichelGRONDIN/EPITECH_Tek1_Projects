/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** convert an unsigned int into hexadec base
*/

#include "./../include/my.h"
#include <stdlib.h>

void    convert_to_hexadec_base(unsigned int nb)
{
    int i  = 0;
    char    *base = my_strdup("0123456789abcdef");
    char    *res = malloc(sizeof(char) * (find_nb_max_char(nb) + 1));

    while (nb != 0) {
        res[i] = base[nb % 16];
        nb = nb / 16;
        i = i + 1;
    }
    res[i] = '\0';
    my_revstr(res);
    my_putstr(res);
}

void    convert_to_maj_hexadec_base(unsigned int nb)
{
    int i  = 0;
    char    *base = my_strdup("0123456789ABCDEF");
    char    *res = malloc(sizeof(char) * (find_nb_max_char(nb) + 1));

    while (nb != 0) {
        res[i] = base[nb % 16];
        nb = nb / 16;
        i = i + 1;
    }
    res[i] = '\0';
    my_revstr(res);
    my_putstr(res);
}
