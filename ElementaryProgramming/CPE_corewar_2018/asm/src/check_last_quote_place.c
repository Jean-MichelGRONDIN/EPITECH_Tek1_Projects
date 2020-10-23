/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** check_last_quote_place
*/

#include "asm.h"

int check_last_quote_place(char *str, int len)
{
    int res = 0;
    int i = count_until_line_finisher(str, "\"");

    if (i != (len + 1))
        return (1);
    if (str[my_strlen(str) - 1] != '\"')
        res = 1;
    return (res);
}