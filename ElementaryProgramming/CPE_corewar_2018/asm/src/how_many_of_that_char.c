/*
** EPITECH PROJECT, 2019
** asm
** File description:
** how many of thatcchar
*/

#include "asm.h"

int how_many_of_that_char(char *str, char c)
{
    int nb = 0;
    int i = 0;

    if (str == NULL)
        return (-1);
    while (str[i] != '\0') {
        if (str[i] == c)
            nb = nb + 1;
        i = i + 1;
    }
    return (nb);
}