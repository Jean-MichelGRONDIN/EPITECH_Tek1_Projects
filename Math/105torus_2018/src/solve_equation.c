/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** solve an equation
*/

#include "./../include/torus.h"

double  solve_equation(double x, double *args)
{
    double  res = args[1] + args[2] * x;

    res = res + args[3] * pow(x, 2) + args[4] * pow(x, 3);
    res = res + args[5] * pow(x, 4);
    return (res);
}
