/*
** EPITECH PROJECT, 2018
** AIA_n4s_2018
** File description:
** libvrep
*/

#include <stdio.h>
#include "my.h"
#include <string.h>
#include "n4s.h"
#include <stdlib.h>

char    *start(void)
{
    char    *str = NULL;
    size_t  n = 0;
    char    **tab;

    my_putstr("START_SIMULATION\n");
    getline(&str, &n, stdin);
    tab = my_str_to_wordtab(str, ':');
    if (strcmp(tab[1], "KO") == 0)
        exit(84);
    else
        return (str);
}

char    *forward(char *vit)
{
    char    *str = NULL;
    size_t  n = 0;

    my_putstr("CAR_FORWARD:");
    my_putstr(vit);
    my_putstr("\n");
    getline(&str, &n, stdin);
    return (str);
}

char    *backward(char *vit)
{
    char    *str = NULL;
    size_t  n = 0;

    my_putstr("CAR_BACKWARDS:");
    my_putstr(vit);
    my_putstr("\n");
    getline(&str, &n, stdin);
    my_putstr("WHEELS_DIR:0\n");
    getline(&str, &n, stdin);
    my_putstr("CYCLE_WAIT:6\n");
    getline(&str, &n, stdin);
    return (str);
}

char    *dir(char *vit, int direc)
{
    char    *str = NULL;
    size_t  n = 0;

    my_putstr("WHEELS_DIR:");
    if (direc < 0)
        my_putstr("-");
    if (direc >= 0 && direc <= 30)
        my_putstr("0");
    else
        my_putstr(vit);
    my_putstr("\n");
    getline(&str, &n, stdin);
    return (str);
}

char    *info(void)
{
    char    *str = NULL;
    size_t  n = 0;

    my_putstr("GET_INFO_LIDAR\n");
    getline(&str, &n, stdin);
    return (str);
}
