/*
** EPITECH PROJECT, 2019
** 107transfer_2018
** File description:
** geader of the project
*/

#ifndef __TRANSFER_H__
#define __TRANSFER_H__

#include "./include.h"

int check_that_star(char *str, int i);
int check_this_arg_stars_pos(char *str);
int check_stars_positions(int ac, char **av);

int check_this_args_chars(char *str);
int check_args_chars(int ac, char **av);

int check_args(int ac, char **av);

int transfer(int ac, char **av);
void    disp_usage(void);

#endif
