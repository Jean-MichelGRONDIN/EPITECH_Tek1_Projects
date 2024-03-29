/*
** EPITECH PROJECT, 2019
** clean string
** File description:
** my_clean_string
*/

#include <stdlib.h>
#include "./../include/my.h"

char *my_clean_string(char *str)
{
    int var = 0;
    int point;
    int index = my_strlen(str);
    char *tmp = my_calloc(sizeof(char), (index + 1));
    char *dest = my_strdup(str);

    if (str[0] == '\n' && str[1] == '\0')
        return (str);
    for (int count = 0; dest[count] != '\0'; count++)
        if (dest[count] == '\t' || dest[count] == '\n')
            dest[count] = ' ';
    for (point = 0; dest[point] == ' ' && dest[point] != '\0'; point++);
    for (; dest[point] != '\0'; point++) {
        if (dest[point] == ' ' &&
            (dest[point + 1] == ' ' || dest[point + 1] == '\0'));
        else
            tmp[var++] = dest[point];
    }
    return (tmp);
}
