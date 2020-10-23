/*
** EPITECH PROJECT, 2018
** 102architect_2018
** File description:
** first steps of the prog
*/

#include "./../include/architect.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

matrix_t    *matrix_multiplication(matrix_t *res, char **av, int *i)
{
    if (strcmp(av[*i], "-t") == 0) {
        res = mult_by_a_transla(res, av, i);
    }
    if (strcmp(av[*i], "-z") == 0) {
        res = mult_by_a_scal(res, av, i);
    }
    if (strcmp(av[*i], "-r") == 0) {
        res = mult_by_a_rotation(res, av, i);
    }
    if (strcmp(av[*i], "-s") == 0) {
        res = mult_by_a_reflexion(res, av, i);
    }
    if (strcmp(av[*i], "-h") == 0) {
        write(2, "Error of transformation, -h is the help .\n", 42);
        exit(84);
    }
    return (res);
}

matrix_t    *creat_first_matrix(char **av, int *i)
{
    matrix_t    *res = NULL;

    if (strcmp(av[*i], "-t") == 0) {
        res = create_a_transla(av, i);
    }
    if (strcmp(av[*i], "-z") == 0) {
        res = create_a_scal(av, i);
    }
    if (strcmp(av[*i], "-r") == 0) {
        res = create_a_rotation(av, i);
    }
    if (strcmp(av[*i], "-s") == 0) {
        res = create_a_reflexion(av, i);
    }
    if (strcmp(av[*i], "-h") == 0) {
        write(2, "Error of transformation, -h is the help .\n", 42);
        exit(84);
    }
    return (res);
}

matrix_t    *pattern_finder(matrix_t *res, char **av, int *i)
{
    if (strcmp(av[*i], "-h") == 0) {
        print_usage();
    }
    if (*i != 3) {
        res = matrix_multiplication(res, av, i);
    } else {
        res = creat_first_matrix(av, i);
    }
    return (res);
}

matrix_t    *find_params(matrix_t *res, int ac, char **av)
{
    int i = 3;

    if (my_str_isnum(av[1]) != 1 && my_str_isnum(av[2]) != 1) {
        write(2, "Wrong arguments x and/or y .\n", 29);
        exit(84);
    }
    while (i < ac) {
        res = pattern_finder(res, av, &i);
        i = i + 1;
    }
    return (res);
}

void    architect(int ac, char **av)
{
    matrix_t    *base = NULL;
    matrix_t    *res = NULL;

    check_args(ac, av);
    base = create_matrix_basic(atof(av[1]), atof(av[2]));
    res = find_params(res, ac, av);
    base = calc_basic_and_3_3_matrix(base, res);
    print_matrix(res);
    print_result(atof(av[1]), atof(av[2]), base);
}
