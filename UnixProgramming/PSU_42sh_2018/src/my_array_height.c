/*
** EPITECH PROJECT, 2019
** array_height
** File description:
** my_array_height
*/

#include "./../include/minishell.h"

int my_array_height(char **array)
{
    int count;

    if (array == NULL)
        return (0);
    for (count = 0; array[count]; count++);
    return (count);
}
