/*
** EPITECH PROJECT, 2018
** 102architect_2018
** File description:
** initialisation generales things
*/

#include <stdio.h>
#include <stdlib.h>
#include "./../include/architect.h"

void    print_matrix_basic(matrix_t *mat)
{
        printf("%.2f\n", mat->x);
        printf("%.2f\n", mat->y);
        printf("%.2f\n", mat->z);
}

void    print_matrix_spaces(float x)
{
    if (x < 0) {
        printf("  ");
    } else {
        printf("   ");
    }
}

void    print_matrix(matrix_t *mat)
{
    put_to_finale_form(mat);
    printf("%.2f", mat[0].x);
    print_matrix_spaces(mat[0].x);
    printf("%.2f", mat[1].x);
    print_matrix_spaces(mat[1].x);
    printf("%.2f\n", mat[2].x);
    printf("%.2f", mat[0].y);
    print_matrix_spaces(mat[0].y);
    printf("%.2f", mat[1].y);
    print_matrix_spaces(mat[1].y);
    printf("%.2f\n", mat[2].y);
    printf("%.2f", mat[0].z);
    print_matrix_spaces(mat[0].z);
    printf("%.2f", mat[1].z);
    print_matrix_spaces(mat[1].z);
    printf("%.2f\n", mat[2].z);
}

void    print_result(int x, int y, matrix_t *mat)
{
    printf("(%d, %d) => (%.2f, %.2f)\n", x, y, mat->x, mat->y);
}

void    print_usage(void)
{
    printf("USAGE\n");
    printf("   ./102architect x y transfo1 arg11 [arg12]");
    printf(" [transfo2 arg12 [arg22]] ...\n");
    printf("\nDESCRIPTION\n");
    printf("    x      abscissa of the original point\n");
    printf("    y      ordinate of the original point\n\n");
    printf("    transfo arg1 [arg2]\n");
    printf("    -t i j      translation along vector (i, j)\n");
    printf("    -z m n      scaling by factors m (x-axis) and n (y-axis)\n");
    printf("    -r d        rotation centered in O by a d degree angle\n");
    printf("    -s d        reflection over the axis passing through");
    printf(" O with an inclination\n");
    printf("                angle of d degrees\n");
    exit(0);
}
