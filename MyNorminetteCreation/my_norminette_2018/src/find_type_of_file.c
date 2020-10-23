/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** find the type of file 'c' for *.c 'h' for *.h
*/

#include "./../include/my_norm.h"

char    find_type_of_file(char *name)
{
    int i = my_strlen(name);
    int dot = -1;

    if (i > 2) {
        if (name[i - 2] == '.')
            dot = 1;
        if (dot == 1 && name[i - 1] == 'c')
            return ('c');
        if (dot == 1 && name[i - 1] == 'h')
            return ('h');
    }
    return ('\0');
}
