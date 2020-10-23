/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** secant methode
*/

#include "./../include/torus.h"

void    secant(double *arg)
{
    double  min = 0.00;
    double  max = 1.00;
    double  semi = 0.00;
    double  limite = arg[6];
    int i = 0;

    while (round(min * pow(10, limite)) != round(max * pow(10, limite))
        && i < 250) {
        semi = max - ((max - min) / (solve_equation(max, arg) -
            solve_equation(min, arg))) * solve_equation(max, arg);
        min = max;
        max = semi;
        printf("x = %.*f\n", find_nb_after_coma(semi, limite), semi);
        i = i + 1;
    }
}
