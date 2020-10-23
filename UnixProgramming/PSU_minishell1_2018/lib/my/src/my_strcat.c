/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** concatenate two strings (put src at the end of dest
*/

#include "./../include/my.h"
#include <stdlib.h>

char    *my_strcat(char *dest, char const *src)
{
    int size = my_strlen(dest) + my_strlen(src);
    char    *res = malloc(sizeof(char) * (size + 1));
    int i = 0;
    int i_two = 1;

    if (dest == NULL || src == NULL)
        return (dest);
    while (dest[i] != '\0') {
        res[i] = dest[i];
        i = i + 1;
    }
    i = i - 1;
    while (src[i_two - 1] != '\0') {
        res[i + i_two] = src[i_two - 1];
        i_two = i_two + 1;
    }
    res[i + i_two] = '\0';
    free_cleanly_this_str(dest);
    dest = res;
    return (dest);
}
