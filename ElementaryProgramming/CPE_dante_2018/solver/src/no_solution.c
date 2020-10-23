/*
** EPITECH PROJECT, 2019
** no_solution
** File description:
** no_solution
*/

#include "my.h"
#include "solver.h"

int the_line(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 'o')
            return (1);
        i++;
    }
    return (0);
}

int no_solution(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        if (the_line(tab[i]) == 1)
            return (1);
        i++;
    }
    return (0);
}
