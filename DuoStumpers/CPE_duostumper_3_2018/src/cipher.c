/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** decrypt the string given as parameter
*/

#include "../include/stumper.h"

char uncrypt_that_char(char c, int nb)
{
    int index = nb / (nb > 0 ? nb : (nb * -1));

    while (nb != 0) {
        c += index;
        nb -= index;
        if (my_char_isalpha(c) != 0) {
            c += 26 * index * -1;
        }
    }
    return (c);
}

char    *cipher(char *str, int nb)
{
    int i = 0;

    while (str[i] != '\0') {
        if (my_char_isalpha(str[i]) == 0)
            str[i] = uncrypt_that_char(str[i], nb);
        i = i + 1;
    }
    return (str);
}
