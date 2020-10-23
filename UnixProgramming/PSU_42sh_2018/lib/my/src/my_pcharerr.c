/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** write on err output a char
*/

#include <unistd.h>

void    my_pcharerr(char c)
{
    write(2, &c, 1);
}
