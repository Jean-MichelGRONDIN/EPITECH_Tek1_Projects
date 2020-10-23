/*
** EPITECH PROJECT, 2018
** my_putchar_c
** File description:
** display a caracter
*/

#include <unistd.h>
#include "../include/my.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
    write(global_fd_file, &c, 1);
}
