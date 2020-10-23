/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** do the derivative
*/

#include "./../include/torus.h"

double  solve_derivative(double x, double *args)
{
    double res = pow(x, 3) * args[5] * 4;

    res = res + pow(x, 2) * args[4] * 3;
    res = res + x * args[3] * 2 + args[2];
    return (res);
}
