/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** create matrixes
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./../include/architect.h"

matrix_t    *create_matrix_empty(void)
{
    matrix_t    *empty = malloc(sizeof(*empty) * 3);

    empty[0].x = 0;
    empty[0].y = 0;
    empty[0].z = 0;
    empty[1].x = 0;
    empty[1].y = 0;
    empty[1].z = 0;
    empty[2].x = 0;
    empty[2].y = 0;
    empty[2].z = 0;
    return (empty);
}

matrix_t    *create_matrix_transla(float x, float y)
{
    matrix_t    *transla = malloc(sizeof(*transla) * 3);

    printf("Translation along vector (%.0f, %.0f)\n", x, y);
    transla[0].x = 1;
    transla[0].y = 0;
    transla[0].z = 0;
    transla[1].x = 0;
    transla[1].y = 1;
    transla[1].z = 0;
    transla[2].x = x;
    transla[2].y = y;
    transla[2].z = 1;
    return (transla);
}

matrix_t    *create_matrix_scal(float x, float y)
{
    matrix_t    *scal = malloc(sizeof(*scal) * 3);

    printf("Scaling by factors %.0f and %.0f\n", x, y);
    scal[0].x = x;
    scal[0].y = 0;
    scal[0].z = 0;
    scal[1].x = 0;
    scal[1].y = y;
    scal[1].z = 0;
    scal[2].x = 0;
    scal[2].y = 0;
    scal[2].z = 1;
    return (scal);
}

matrix_t    *create_matrix_rotation(float x)
{
    float   rad = M_PI / 180.0;
    matrix_t    *rotation = malloc(sizeof(*rotation) * 3);

    printf("Rotation by a %.0f degree angle\n", x);
    rotation[0].x = cos(x * rad);
    rotation[0].y = sin(x * rad);
    rotation[0].z = 0;
    rotation[1].x = -sin(x * rad);
    rotation[1].y = cos(x * rad);
    rotation[1].z = 0;
    rotation[2].x = 0;
    rotation[2].y = 0;
    rotation[2].z = 1;
    return (rotation);
}

matrix_t    *create_matrix_reflexion(float x)
{
    float   rad = M_PI / 180.0;
    matrix_t    *reflexion = malloc(sizeof(*reflexion) * 3);

    printf("Reflection over an axis with an inclination angle of %.0f", x);
    printf(" degrees\n");
    reflexion[0].x = cos(2*(x * rad));
    reflexion[0].y = sin(2*(x * rad));
    reflexion[0].z = 0;
    reflexion[1].x = sin(2*(x * rad));
    reflexion[1].y = -cos(2*(x * rad));
    reflexion[1].z = 0;
    reflexion[2].x = 0;
    reflexion[2].y = 0;
    reflexion[2].z = 1;
    return (reflexion);
}
