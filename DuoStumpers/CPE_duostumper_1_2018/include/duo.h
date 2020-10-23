/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** header of the prog
*/

#ifndef __DUO_H__
#define __DUO_H__

#include <stdlib.h>

#include "my.h"

void    print_n_time_this_str(char *str, int n);
void    first_part_print(char *one, char *two, int nb);
void    step_one_part_two(char **one, char **two);
void    part_two_step_two_loop(char *one, char *two, int nb);
void    part_two_step_two(char **one, char **two);

void    first_step(char **one, char **two);
void    second_part_print(char *one, char *two, int nb);
void    second_step(char **one, char **two);

void    part_two(char **one, char **two, int nb);
void    part_one(char **one, char **two, int nb);
void    fractal_complex(char **av);

int check_that_string_chars(char *str);
int check_strings_chars(char **av);

int check_params(char **av);

void    print_fractal_one(char *one);

void    fractal_basic(char **av);
int fractal(char **av, int nb);

int my_stumper(int ac, char **av);

#endif
