/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** reverse a string
*/

#include "./../include/my.h"

char    *interchanger_fonction(char *str, int last_letter)
{
    int i = 0;
    char    tmp = 0;

    while (i < last_letter) {
        tmp = str[i];
        str[i] = str[last_letter];
        str[last_letter] = tmp;
        i = i + 1;
        last_letter = last_letter - 1;
    }
    return (str);
}

char    *my_revstr(char *str)
{
    str = interchanger_fonction(str, my_strlen(str) - 1);
    return (str);
}
