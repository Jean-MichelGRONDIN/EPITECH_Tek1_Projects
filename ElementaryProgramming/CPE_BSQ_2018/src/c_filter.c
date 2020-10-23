/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** filter for no compatible characters
*/

#include <stdlib.h>
#include <unistd.h>
#include "./../include/bootstrap.h"
#include "./../include/my.h"

void    c_filter(char c)
{
    if (c != '.' && c != 'o') {
        write(2, "Wrong character : ", 18);
        my_putchar('"');
        my_putchar(c);
        my_putchar('"');
        my_putstr(" .\n");
        exit(84);
    }
}
