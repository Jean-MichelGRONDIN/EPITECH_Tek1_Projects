/*
** EPITECH PROJECT, 2019
** my_getopt
** File description:
** kim_getopt
*/

#include "my.h"
#include <stddef.h>
#include <stdio.h>

opt_t init_opt(opt_t opt)
{
    opt.w = 0;
    opt.h = 0;
    opt.a = 0;
    return opt;
}

opt_t my_options(opt_t opt, char **av, int i)
{
    for (int n = 1; av[i][n] != '\0'; n++) {
        if (av[i][n] == 'w')
            opt.w = opt.w + 1;
        if (av[i][n] == 'h')
            opt.h = opt.h + 1;
        if (av[i][n] == 'a')
            opt.a = opt.a + 1;
    }
    return opt;
}

int check_opt(char **av, int nb, int n, int i)
{
    char opt[] = {'w', 'h', 'a', '\0'};

    for (int j = 0; opt[j] != '\0'; j++)
        if (av[n][i] == opt[j])
                nb++;
    return nb;
}

int verif_opt(char **av, int n)
{
    int len = 0;
    int nb = 0;

    for (int i = 1; av[n][i] != '\0'; i++)
        nb = check_opt(av, nb, n, i);
    if ((my_strlen(av[n]) - 1) != nb)
        return 1;
    else
        return 0;
}

opt_t my_getopt(char **av)
{
    opt_t opt = init_opt(opt);
    int nb = 0;

    for (int i = 0; av[i] != NULL; i++)
        if (av[i][0] == '-' && verif_opt(av, i) == 0)
            opt = my_options(opt, av, i);
    return opt;
}

game_t *new_game_value(int ac, char **av)
{
    opt_t options = my_getopt(av);
    int w = 7;
    int h = 6;
    char p1 = 'X';
    char p2 = 'O';
    char a = '#';
    
    if (options.w == 1)
        w = check_w(ac, av, w);
    if (options.h == 1)
        h = check_h(ac, av, h);
    if (options.a == 1)
        a = check_a(ac, av, a);
    p1 = check_p1(ac, av, p1);
    p2 = check_p2(ac, av, p2);
    return (game);
}

