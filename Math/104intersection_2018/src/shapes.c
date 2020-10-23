/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** head function for differentes shapes
*/

#include "./../include/intersection.h"

void    sphere(char **av, double *args)
{
    printf("Sphere of radius %s\n", av[8]);
    printf("Line passing through the point (%s, %s, %s)", av[2], av[3], av[4]);
    printf(" and parallel to the vector (%s, %s, %s)\n", av[5], av[6], av[7]);
    calc_intersection_sphere(args);
}

void    cylinder(char **av, double *args)
{
    printf("Cylinder of radius %s\n", av[8]);
    printf("Line passing through the point (%s, %s, %s)", av[2], av[3], av[4]);
    printf(" and parallel to the vector (%s, %s, %s)\n", av[5], av[6], av[7]);
    calc_intersection_cylinder(args);
}

void    cone(char **av, double *args)
{
    printf("Cone with a %s degree angle\n", av[8]);
    printf("Line passing through the point (%s, %s, %s)", av[2], av[3], av[4]);
    printf(" and parallel to the vector (%s, %s, %s)\n", av[5], av[6], av[7]);
    calc_intersection_cone(args);
}
