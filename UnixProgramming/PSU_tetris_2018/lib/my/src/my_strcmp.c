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
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i = i + 1;
    }
    return (0);
}
