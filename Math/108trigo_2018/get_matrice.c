/*
** EPITECH PROJECT, 2019
** 108trigo
** File description:
** get_matrice
*/

#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int nbr_arg(char **tab)
{
    int nb = 2;
    int compt = 0;

    while (tab[nb] != NULL) {
        nb = nb + 1;
        compt = compt + 1;
    }
    return (compt);
}

int get_size_of_matrix(char **str)
{
    int i = nbr_arg(str);
    int compt = 0;
    int size = 0;

    if (i == 1)
        size = 1;
    else if (i <= 4)
        size = 2;
    else {
        while (compt < i) {
            size = size + 1;
            compt = size * size;
	}
    }
    return (size);
}

double *get_matrice(char **tab)
{
    double *matr;
    int compt = 0;
    int nb = 2;
    int size = (get_size_of_matrix(tab) * 2);

    matr = malloc(sizeof(double) * size);
    while (tab[nb] != NULL) {
        matr[compt] = atof(tab[nb]);
        compt = compt + 1;
        nb = nb + 1;
    }
    while (compt <= size) {
        matr[compt] = 0.00;
        compt = compt + 1;
    }
    return (matr);
}

void print_matrix(double *tab, char **str)
{
    int size = get_size_of_matrix(str);
    int nb = 0;
    int compt = 0;
    int i = 0;

    while (nb != size) {
        while (compt != size) {
            printf("%.2f", tab[i]);
            i = i + 1;
            compt = compt + 1;
            if (compt != size)
                printf("\t");
        }
        printf("\n");
        compt = 0;
        nb = nb + 1;
    }
}
