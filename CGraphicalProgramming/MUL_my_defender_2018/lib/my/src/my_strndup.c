/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** malloc of n bytes and copy n char in this string from a str send in arg
*/

#include "./../include/my.h"
#include <stdlib.h>

char    *my_strndup(char const *str, int nb)
{
    int i = 0;
    char    *res = NULL;

    if (str == NULL || nb == 0)
        return (NULL);
    if (str[0] == '\0')
        return (NULL);
    res = malloc(sizeof(char) * (nb + 1));
    res[nb] = '\0';
    while (i != nb && str[i] != '\0') {
        res[i] = str[i];
        i = i + 1;
    }
    return (res);
}
