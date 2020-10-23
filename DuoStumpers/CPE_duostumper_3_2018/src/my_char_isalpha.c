/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** return 0 if the char is alpha or else 1
*/

#include "./../include/stumper.h"

int my_char_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (0);
    return (1);
}
