/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** display the restult
*/

#include "./../include/intersection.h"

void    print_when_zero(double *args, var_t *var)
{
    double  x = args[1] + ((-var->b / (2 * var->a)) * args[4]);
    double  y = args[2] + ((-var->b / (2 * var->a)) * args[5]);
    double  z = args[3] + ((-var->b / (2 * var->a)) * args[6]);

    printf("(%.3f, %.3f, %.3f)\n", x, y, z);
    exit(0);
}

void    print_when_bigger_than_zero(double *args, var_t *var, double d)
{
    double  x = args[1] + (((-var->b + sqrt(d)) / (2 * var->a)) * args[4]);
    double  y = args[2] + (((-var->b + sqrt(d)) / (2 * var->a)) * args[5]);
    double  z = args[3] + (((-var->b + sqrt(d)) / (2 * var->a)) * args[6]);

    printf("(%.3f, %.3f, %.3f)\n", x, y, z);
    x = args[1] + (((-var->b - sqrt(d)) / (2 * var->a)) * args[4]);
    y = args[2] + (((-var->b - sqrt(d)) / (2 * var->a)) * args[5]);
    z = args[3] + (((-var->b - sqrt(d)) / (2 * var->a)) * args[6]);
    printf("(%.3f, %.3f, %.3f)\n", x, y, z);
    exit(0);
}

void    display_result(double *args, var_t *var, double d)
{
    if (d < 0) {
        printf("No intersection point.\n");
        exit(0);
    }
    if (d == 0) {
        if (args[0] == 2 || args[0] == 3) {
            printf("There is an infinite number of intersection points.\n");
            exit(0);
        } else {
            printf("1 intersection point:\n");
            print_when_zero(args, var);
        }
    }
    if (d > 0) {
        printf("2 intersection points:\n");
        print_when_bigger_than_zero(args, var, d);
    }
}
