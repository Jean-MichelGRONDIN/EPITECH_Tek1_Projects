/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** compare two strings s1 and s2
*/

#include "./../include/my.h"
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i  = 0;

    if (s1 == NULL || s2 == NULL)
        return (-84);
    if (my_strlen(s1) != my_strlen(s2))
        return (1);
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
