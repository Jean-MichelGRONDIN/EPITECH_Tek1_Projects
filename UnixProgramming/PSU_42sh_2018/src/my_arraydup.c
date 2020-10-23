/*
** EPITECH PROJECT, 2019
** my_arraydup
** File description:
** my_arraydup
*/

#include "./../include/minishell.h"

char **my_arraydup(char **array)
{
    char **tmp = NULL;

    if (array == NULL)
        return (NULL);
    tmp = my_calloc(sizeof(char *), my_array_height(array) + 1);
    for (int count = 0; array[count]; count++)
        tmp[count] = my_strdup(array[count]);
    return (tmp);
}
