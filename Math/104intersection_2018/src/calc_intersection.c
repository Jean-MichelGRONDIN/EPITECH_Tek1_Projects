/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** function that calc the intersections
*/

#include "./../include/intersection.h"

void    calc_intersection_sphere(double *args)
{
    double  d = 0;
    var_t   *var = initialise_var_t();

    var->a = pow(args[4], 2) + pow(args[5], 2) + pow(args[6], 2);
    var->b = (2 * args[1] * args[4]) + (2 * args[2] * args[5]);
    var->b = var->b + (2 * args[3] * args[6]);
    var->c = pow(args[1], 2) + pow(args[2], 2) + pow(args[3], 2);
    var->c = var->c - pow(args[7], 2);
    d = pow(var->b, 2) - (4 * var->a * var->c);
    display_result(args, var, d);
}

void    calc_intersection_cylinder(double *args)
{
    double  d = 0;
    var_t   *var = initialise_var_t();

    var->a = pow(args[4], 2) + pow(args[5], 2);
    var->b = (2 * args[1] * args[4]) + (2 * args[2] * args[5]);
    var->c = pow(args[1], 2) + pow(args[2], 2) - pow(args[7], 2);
    d = pow(var->b, 2) - (4 * var->a * var->c);
    display_result(args, var, d);
}

void    calc_intersection_cone(double *arg)
{
    double  d = 0;
    double  angle = (arg[7] * M_PI) / 180;
    var_t   *var = initialise_var_t();

    var->a = pow(arg[4], 2) + pow(arg[5], 2);
    var->a = var->a - (pow(arg[6], 2) * pow(tan(angle), 2));
    var->b = (2 * arg[1] * arg[4]) + (2 * arg[2] * arg[5]);
    var->b = var->b - (2 * arg[3] * arg[6] * pow(tan(angle), 2));
    var->c = pow(arg[1], 2) + pow(arg[2], 2);
    var->c = var->c - (pow(arg[3], 2) * pow(tan(angle), 2));
    d = pow(var->b, 2) - (4 * var->a * var->c);
    display_result(arg, var, d);
}
