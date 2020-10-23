/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** main of the prog
*/

#include "my.h"
#include "solver.h"

int main(int ac, char **av)
{
    char **tab = NULL;
    int i = 0;

    if (ac != 2)
        return (84);
    tab = my_settab(av[1]);
    if (tab == NULL)
        return (84);
    tab = clean_tab(tab);
    if (tab != NULL)
        tab = solver(tab);
    if (tab != NULL && tab[0][0] != '2') {
        tab = replace_char(tab);
        for (i = 0; tab[i + 1] != NULL; i++)
            printf("%s\n", tab[i]);
        printf("%s", tab[i]);
    } else
        printf("no solution found");
    return (0);
}
