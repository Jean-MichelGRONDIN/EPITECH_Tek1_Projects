/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** check and create the first matrix
*/

#include "./../include/architect.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

matrix_t    *create_a_transla(char **av, int *i)
{
    matrix_t    *mat = NULL;

    if (my_str_isnum(av[*i + 1]) == 1 && my_str_isnum(av[*i + 2]) == 1) {
        mat = create_matrix_transla(atof(av[*i + 1]), atof(av[*i + 2]));
        *i = *i + 2;
    } else {
        write(2, "Wrong arguments for the transformation -t .\n", 44);
        exit(84);
    }
    return (mat);
}

matrix_t    *create_a_scal(char **av, int *i)
{
    matrix_t    *mat = NULL;

    if (my_str_isnum(av[*i + 1]) == 1) {
        mat = create_matrix_scal(atof(av[*i + 1]), atof(av[*i + 2]));
        *i = *i + 2;
    } else {
        write(2, "Wrong arguments for the transformation -z .\n", 44);
        exit(84);
    }
    return (mat);
}

matrix_t    *create_a_rotation(char **av, int *i)
{
    matrix_t    *mat = NULL;

    if (my_str_isnum(av[*i + 1]) == 1) {
        mat = create_matrix_rotation(atof(av[*i + 1]));
        *i = *i + 1;
    } else {
        write(2, "Wrong arguments for the transformation -r .\n", 44);
        exit(84);
    }
    return (mat);
}

matrix_t    *create_a_reflexion(char **av, int *i)
{
    matrix_t    *mat = NULL;

    if (my_str_isnum(av[*i + 1]) == 1) {
        mat = create_matrix_reflexion(atof(av[*i + 1]));
        *i = *i + 1;
    } else {
        write(2, "Wrong arguments for the transformation -s .\n", 44);
        exit(84);
    }
    return (mat);
}
