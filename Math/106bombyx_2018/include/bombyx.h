/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** headers of the project
*/

#ifndef __BOMBYX_H__
#define __BOMBYX_H__

#include "./include.h"

void    second_method_calc(double *args, double k);
void    second_method(double *args);

int check_values_are_integers(int ac, char **av);
int check_value_of_args(int ac, double *args, char **av);

double  *init_args_in_arr_of_double(int ac, char **av);

int initialise(int ac, char **av);

int check_args_are_numbers(int ac, char **av);

void    disp_usage(void);

void    first_method(double n, double k, int nb);

int bombyx(int ac, char **av);

#endif
