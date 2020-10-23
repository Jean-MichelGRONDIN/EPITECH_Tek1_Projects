/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** header of the project
*/

#ifndef __SOLVER_H__
#define __SOLVER_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include.h"

int no_solution(char **tab);
char **my_settab(char *path);
char **solver(char **av);
char **clean_tab(char **tab);
char **replace_char(char **tab);
int my_around(char **tab, int y, int x);
int my_end(char **tab, int y, int x);
int len_tab(char **tab);
char **move_in_lab(char **tab, int y, int x, int *stat);

#endif
