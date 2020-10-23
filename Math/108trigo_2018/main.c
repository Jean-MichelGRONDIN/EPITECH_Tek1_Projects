/*
** EPITECH PROJECT, 2019
** 108trigo
** File description:
** main
*/

#include <math.h>

double *get_matrice(char **tab);

void print_matrix(double *tab, char **str);

int main(int ac, char **av)
{
    double *tab;

    if (ac < 3)
        return (84);
    tab = get_matrice(av);
    print_matrix(tab, av);
    return (0);
}
