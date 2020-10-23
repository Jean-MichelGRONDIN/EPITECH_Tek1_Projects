/*
** EPITECH PROJECT, 2018
** CPE_getnextline_2018
** File description:
** prototype of the project
*/

#ifndef __GETNEXTLINE_H__
#define __GETNEXTLINE_H__

#include <stdlib.h>
#include <unistd.h>

    #ifndef READ_SIZE
    #define READ_SIZE (80)
    #endif

char    *assemb_these_strings(char *src, char *str, int size);
int is_there_a_line_finisher(char *str, int action);
char    *take_this_line(int fd, char *str, char *res);
char    *when_still_something(char *str, char *res, int *nb_line);
char    *get_next_line(int fd);

#endif
