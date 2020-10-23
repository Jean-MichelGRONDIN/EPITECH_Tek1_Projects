/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** count the nb of characters until a line finisher
*/

#include "./my.h"

int count_until_line_finisher(char const *str, char *enders)
{
    int i = 0;

    while (my_is_in(str[i], enders) == 0 && str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
