/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** compare n chars of 2 strings
*/

#include "./../include/my.h"
#include "stdlib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int one_len = my_strlen(s1);
    int two_len = my_strlen(s2);
    int i = 0;

    if (s1 == NULL || s2 == NULL || n < 1)
        return (-84);
    if (one_len < n || two_len < n)
        return (1);
    while (i != n && s1[i] != '\0') {
        if (s1[i] != s2[i])
            return (1);
        i = i + 1;
    }
    return (0);
}
