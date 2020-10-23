/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** get the input from standar input
*/

#include "./../include/match.h"

char    *get_input(void)
{
    char    *str = NULL;
    size_t  len = 0;
    int i = 0;

    getline(&str, &len, stdin);
    if (str == NULL || str[0] == '\0')
        return (NULL);
    if (str[0] != '\n') {
        while (str[i] != '\n') {
            i = i + 1;
        }
        str[i] = '\0';
    }
    return (str);
}
