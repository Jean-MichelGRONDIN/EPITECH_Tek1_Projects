/*
** EPITECH PROJECT, 2018
** ia
** File description:
** ia
*/

#include <stdio.h>
#include "my.h"
#include "n4s.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int verif(char **info, char *str)
{
    int i = 0;

    while (info[i] != NULL) {
        if (strcmp(info[i], str) == 0)
            return (1);
        i = i + 1;
    }
    return (0);
}

void    get_info(car_t *car)
{
    char    *str;

    str = info();
    car->info = my_str_to_wordtab(str, ':');
    car->middle = atoi(car->info[18]);
    car->left = atoi(car->info[3]);
    car->right = atoi(car->info[34]);
}

int main(int ac, char **av)
{
    car_t   car;
    char    *str = NULL;
    size_t  n = 0;

    start();
    forward("1");
    my_putstr("CYCLE_WAIT:1\n");
    getline(&str, &n, stdin);
    while (1) {
        get_info(&car);
        check_wall(car);
        back(car);
        if (verif(car.info, "Track Cleared") == 1)
            break;
    }
    my_putstr("STOP_SIMULATION\n");
    return (0);
}
