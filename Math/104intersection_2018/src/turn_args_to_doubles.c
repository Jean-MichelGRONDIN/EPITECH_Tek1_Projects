/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** put args of av in arry of double
*/

#include "./../include/intersection.h"

double  *turn_args_to_doubles(char **av)
{
    int i  = 0;
    double  *args = malloc(sizeof(double) * 8);

    while (i != 8) {
        args[i] = atof(av[i + 1]);
        i = i + 1;
    }
    return (args);
}
