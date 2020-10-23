/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** a function that display the number send in binary base
*/

#include <stdlib.h>
#include "./../include/my.h"

void    converte_to_binary_base(int nb)
{
    char    *res = malloc(sizeof(char) * ((nb / 2) + 2));
    int i = 0;

    res[((nb / 2) + 1)] = '\0';
    while (nb != 0) {
        res[i] = ((nb % 2) + 48);
        nb = nb / 2;
        i = i + 1;
    }
    res[i] = '\0';
    res = my_revstr(res);
    my_putstr(res);
}
