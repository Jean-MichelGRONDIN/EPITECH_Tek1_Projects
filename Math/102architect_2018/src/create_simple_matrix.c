/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** function that create simple matrix
*/

#include <stdlib.h>
#include "./../include/architect.h"

matrix_t    *create_matrix_basic(float x, float y)
{
    matrix_t    *base = malloc(sizeof(*base));

    base->x = x;
    base->y = y;
    base->z = 1;
    return (base);
}

matrix_t    *create_matrix_simple_empty(void)
{
    matrix_t    *base = malloc(sizeof(*base));

    base->x = 0;
    base->y = 0;
    base->z = 0;
    return (base);
}
