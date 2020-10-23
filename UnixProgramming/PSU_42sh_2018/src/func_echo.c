/*
** EPITECH PROJECT, 2018
** echo
** File description:
** echo
*/

#include "../include/my.h"

void func_dete(char c)
{
    char *str = "\0\a\b\t\n\v\f\r";
    char *str_cmp = "0abtnvfr";

    for (int i = 0; str_cmp[i]; i++)
        c == str_cmp[i] ? my_putchar(str[i]) : 0;
}

void my_pre_putstr_e(char *str)
{
    for (int i = 0; str[i]; ++i)
        str[i] == '\\' ? func_dete(str[i + 1]), i++ : my_putchar(str[i]);
    my_putchar('\n');
}

void my_pre_putstr_e_n(char *str)
{
    for (int i = 0; str[i]; ++i)
        str[i] == '\\' ? func_dete(str[i + 1]), i++ : my_putchar(str[i]);
}

void my_pre_putstr_n(char *str)
{
    my_putstr(str);
}

void my_pre_putstr(char *str)
{
    my_putstr(str);
    my_putchar('\n');
}