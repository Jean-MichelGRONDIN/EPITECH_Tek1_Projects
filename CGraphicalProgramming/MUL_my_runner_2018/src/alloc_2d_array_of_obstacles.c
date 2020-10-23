/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** alloc the 2d tab of float for obstacles
*/

#include "./../include/runner.h"

int **alloc_2d_array_of_obstacles(int nb)
{
    int **tab = malloc(sizeof(float *) * (nb + 1));
    int i = 0;

    tab[nb] = NULL;
    while (i != nb) {
        tab[i] = malloc(sizeof(float) * 2);
        tab[i][0] = 0;
        tab[i][1] = 0;
        i = i + 1;
    }
    return (tab);
}
