/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** first function of the project
*/

#include "./../include/minishell.h"

int minishell(int ac, char **av, char **env)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            my_putstr("Here will be the usage !\n");
            return (0);
        }
    }
    if (ac > 1) {
        my_pstrerr("Wrong number of arguments !\n");
        return (84);
    }
    return (initialise(env));
}
