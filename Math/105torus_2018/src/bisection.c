/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** bisection part
*/

#include "./../include/torus.h"

void    bisection(double *arg)
{
    double  n = pow(10, (arg[6] * -1));
    double  min = 0.00;
    double  max = 1.00;
    double  semi = 0.50;
    int limite = arg[6];

    while ((max - min) > n) {
        printf("x = %.*f\n", find_nb_after_coma(semi, limite), semi);
        if ((solve_equation(min, arg) > 0 && solve_equation(semi, arg) < 0)
            || (solve_equation(min, arg) < 0 && solve_equation(semi, arg) > 0))
            max = semi;
        else
            min = semi;
        semi = (min + max) / 2;
    }
}
