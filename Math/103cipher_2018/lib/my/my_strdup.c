/*
** EPITECH PROJECT, 2018
** CPool_Day08_2018 my_strdup_c
** File description:
** allocates memory and copies the string given as argument in it
*/

#include <stddef.h>
#include <stdlib.h>
#include "./my.h"

char    *my_strdup(char const *src)
{
    char    *str;
    int index_cpy = 0;

    if (src == NULL) {
        return (NULL);
    } else if (my_strlen(src) == 0) {
        str = malloc(sizeof(char) * 1);
        str[0] = '\0';
        return (str);
    } else {
        str = malloc(sizeof(char) * (my_strlen(src) + 1));
        while (src[index_cpy] != '\0') {
            str[index_cpy] = src[index_cpy];
            index_cpy = index_cpy + 1;
        }
        str[index_cpy] = '\0';
        return (str);
    }
}
