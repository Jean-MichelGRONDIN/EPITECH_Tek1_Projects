/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** newton methode to resolve
*/

#include "./../include/torus.h"

void    newton(double *arg)
{
    int precision = arg[6];
    double  limite = pow(10, (arg[6]));
    double  save = 0;
    double  semi = 0.5;
    double  divide = 0;

    while (round(save * limite) != round(semi * limite)) {
        save = semi;
        printf("x = %.*f\n", find_nb_after_coma(semi, precision), semi);
        divide = solve_derivative(semi, arg);
        if (divide == 0)
            exit(0);
        semi = semi - (solve_equation(semi, arg) / divide);
    }
}
