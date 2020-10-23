/*
** EPITECH PROJECT, 2019
** CPU_duostumper_2018
** File description:
** check_args
*/

#include "../get_opt/my.h"
#include <stdlib.h>
#include <stdio.h>

int check_w(int ac, char **av, int w)
{
    int check = 0;

    for (int i = 0; av[i] != NULL && i != ac - 1; i++) {
        if (my_strcmp(av[i], "-w") == 0 && atoi(av[i + 1]) > 0 &&
            atoi(av[i + 1]) <= 80)
            w = atoi(av[i + 1]);
    }
    return w;
}

int check_h(int ac, char **av, int h)
{
    int check = 0;

    for (int i = 0; av[i] != NULL && i != ac - 1; i++) {
        if (my_strcmp(av[i], "-h") == 0 && atoi(av[i + 1]) > 0 &&
            atoi(av[i + 1]) <= 16)
            h = atoi(av[i + 1]);
    }
    return h;
}

int check_a(int ac, char **av, char a)
{
    for (int i = 0; av[i] != NULL && i != ac - 1; i++) {
        if (my_strcmp(av[i], "-a") == 0)
            a = av[i + 1][0];
    }
    return a;
}

int check_p1(int ac, char **av, char p1)
{
    for (int i = 0; av[i] != NULL && i != ac - 1; i++) {
        if (my_strcmp(av[i], "-p1") == 0)
            p1 = av[i + 1][0];
    }
    return p1;
}

int check_p2(int ac, char **av, char p2)
{
    for (int i = 0; av[i] != NULL && i != ac - 1; i++) {
        if (my_strcmp(av[i], "-p2") == 0 && av[i + 1][1] == '\0')
            p2 = av[i + 1][0];
    }
    return p2;
}
