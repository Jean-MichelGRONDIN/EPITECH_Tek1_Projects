/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** choose the methode of resolution
*/

#include "./../include/torus.h"

int choose_methode(double *arg)
{
    int methode = arg[0];

    if (methode == 1) {
        bisection(arg);
        return (0);
    }
    if (methode == 2) {
        newton(arg);
        return (0);
    }
    if (methode == 3) {
        secant(arg);
        return (0);
    }
    return (84);
}
