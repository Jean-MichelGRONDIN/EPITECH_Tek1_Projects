/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** compare two strings s1 and s2
*/

#include "./my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i  = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return (1);
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
