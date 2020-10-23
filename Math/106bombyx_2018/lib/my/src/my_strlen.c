/*
** EPITECH PROJECT, 2018
** my_strlen_c
** File description:
** display the number of characteres found in the string
*/

#include "./../include/my.h"
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (-84);
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
