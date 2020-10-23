/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** header of the project
*/

#ifndef __TORUS_H__
#define __TORUS_H__

#include "./include.h"

void	secant(double *arg);

int find_nb_after_coma(double nb, int max);

void    newton(double *arg);

double  solve_derivative(double x, double *args);

int choose_methode(double *arg);

void    bisection(double *arg);

double  solve_equation(double x, double *args);

double	*init_args(int ac, char **av);

int initialise(int ac, char **av);

int check_that_all_args_are_integers(int ac, char **av);

void    display_the_usage(void);

int torus(int ac, char **av);

#endif
