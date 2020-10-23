/*
** EPITECH PROJECT, 2018
** 102architect_2018
** File description:
** functions of calcul
*/

#include "./../include/architect.h"

matrix_t    *calc_basic_and_3_3_matrix(matrix_t *two, matrix_t *one)
{
    matrix_t    *res = create_matrix_simple_empty();

    res->x = one[0].x * two->x + one[1].x * two->y + one[2].x * two->z;
    res->y = one[0].y * two->x + one[1].y * two->y + one[2].y * two->z;
    res->z = one[0].z * two->x + one[1].z * two->y + one[2].z * two->z;
    return (res);
}

matrix_t    *calc_between_3_3_matrix(matrix_t *two, matrix_t *one)
{
    matrix_t    *res = create_matrix_empty();

    res[0].x = one[0].x * two[0].x + one[1].x * two[0].y + one[2].x * two[0].z;
    res[1].x = one[0].x * two[1].x + one[1].x * two[1].y + one[2].x * two[1].z;
    res[2].x = one[0].x * two[2].x + one[1].x * two[2].y + one[2].x * two[2].z;
    res[0].y = one[0].y * two[0].x + one[1].y * two[0].y + one[2].y * two[0].z;
    res[1].y = one[0].y * two[1].x + one[1].y * two[1].y + one[2].y * two[1].z;
    res[2].y = one[0].y * two[2].x + one[1].y * two[2].y + one[2].y * two[2].z;
    res[0].z = one[0].z * two[0].x + one[1].z * two[0].y + one[2].z * two[0].z;
    res[1].z = one[0].z * two[1].x + one[1].z * two[1].y + one[2].z * two[1].z;
    res[2].z = one[0].z * two[2].x + one[1].z * two[2].y + one[2].z * two[2].z;
    return (res);
}

void    put_to_finale_form(matrix_t *mat)
{
    int i = 0;

    while (i != 3) {
        if (mat[i].x < 0.01 && mat[i].x > -0.01)
            mat[i].x = 0.00;
        if (mat[i].y < 0.01 && mat[i].y > -0.01)
            mat[i].y = 0.00;
        if (mat[i].z < 0.01 && mat[i].z > -0.01)
            mat[i].z = 0.00;
        i = i + 1;
    }
}
