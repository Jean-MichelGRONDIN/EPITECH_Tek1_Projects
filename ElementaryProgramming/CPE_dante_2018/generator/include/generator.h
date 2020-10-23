/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** header of the project
*/

#ifndef __GENERATOR_H__
#define __GENERATOR_H__

#include "./include.h"

char    **empty_square_mazing(char **tab, int x, int y);

int initialise_size(char **av, int perfect);

void    generate_maze(int x, int y, int perfect);

char    **line_mazing(char **tab, int y);

char    **go_in_line(char **tab, int x, int y, int nb);
char    **go_in_row(char **tab, int x, int y, int nb);
char    **do_first_way(char **tab, int x, int y);

int nb_alea(int a, int b);

char    **init_tab(int y, int x);

int generator(int ac, char **av);

#endif
