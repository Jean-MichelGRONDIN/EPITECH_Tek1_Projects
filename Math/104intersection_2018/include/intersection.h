/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** protoptypes of the prog
*/

#ifndef __INTERSECTION_H__
#define __INTERSECTION_H__

#include "./include.h"

typedef struct variables {
    double  a;
    double  b;
    double  c;
} var_t;

void    calc_intersection_sphere(double *args);
void    calc_intersection_cylinder(double *args);
void    calc_intersection_cone(double *arg);

void    display_usage(void);

var_t   *initialise_var_t(void);

void    sphere(char **av, double *args);
void    cylinder(char **av, double *args);
void    cone(char **av, double *args);

void    print_when_zero(double *args, var_t *var);
void    print_when_bigger_than_zero(double *args, var_t *var, double d);
void    display_result(double *args, var_t *var, double d);

int check_if_is_integer(char *str);
void    exit_wrong_opt(void);
void    do_the_shape(char **av, double *args);

int check_if_arg_are_num(int ac, char **av);
int intersection(int ac, char **av);

double  *turn_args_to_doubles(char **av);

#endif
