/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** do the transformation
*/

#include "./../include/architect.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

matrix_t    *mult_by_a_transla(matrix_t *mat, char **av, int *i)
{
    matrix_t    *transla = NULL;

    if (my_str_isnum(av[*i + 1]) == 1 && my_str_isnum(av[*i + 2]) == 1) {
        transla = create_matrix_transla(atof(av[*i + 1]), atof(av[*i + 2]));
        mat = calc_between_3_3_matrix(mat, transla);
        *i = *i + 2;
    } else {
        write(2, "Wrong arguments for the transformation -t .\n", 44);
        exit(84);
    }
    return (mat);
}

matrix_t    *mult_by_a_scal(matrix_t *mat, char **av, int *i)
{
    matrix_t    *scal = NULL;

    if (my_str_isnum(av[*i + 1]) == 1) {
        scal = create_matrix_scal(atof(av[*i + 1]), atof(av[*i + 2]));
        mat = calc_between_3_3_matrix(mat, scal);
        *i = *i + 2;
    } else {
        write(2, "Wrong arguments for the transformation -z .\n", 44);
        exit(84);
    }
    return (mat);
}

matrix_t    *mult_by_a_rotation(matrix_t *mat, char **av, int *i)
{
    matrix_t    *rotation = NULL;

    if (my_str_isnum(av[*i + 1]) == 1) {
        rotation = create_matrix_rotation(atof(av[*i + 1]));
        mat = calc_between_3_3_matrix(mat, rotation);
        *i = *i + 1;
    } else {
        write(2, "Wrong arguments for the transformation -r .\n", 44);
        exit(84);
    }
    return (mat);
}

matrix_t    *mult_by_a_reflexion(matrix_t *mat, char **av, int *i)
{
    matrix_t    *reflexion = NULL;

    if (my_str_isnum(av[*i + 1]) == 1) {
        reflexion = create_matrix_reflexion(atof(av[*i + 1]));
        mat = calc_between_3_3_matrix(mat, reflexion);
        *i = *i + 1;
    } else {
        write(2, "Wrong arguments for the transformation -s .\n", 44);
        exit(84);
    }
    return (mat);
}
