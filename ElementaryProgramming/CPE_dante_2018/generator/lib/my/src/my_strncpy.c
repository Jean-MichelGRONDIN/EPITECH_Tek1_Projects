/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** copies n char of a string into another
*/

#include "./../include/my.h"
#include <stdlib.h>

char    *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (dest == NULL || src == NULL || n < 1) {
        return (dest);
    }
    while (i != n && src[i] != '\0' && dest[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    return (dest);
}
