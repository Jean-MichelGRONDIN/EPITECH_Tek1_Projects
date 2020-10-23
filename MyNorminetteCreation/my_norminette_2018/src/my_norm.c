/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** first function called
*/

#include "./../include/my_norm.h"

int my_norm(int ac, char **av)
{
    if (ac > 2) {
        my_pstrerr(COLOR_RED "Wrong number of arguments !" COLOR_RESET "\n");
        return (84);
    }
    if (ac == 1)
        return(initialise(NULL));
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            disp_usage();
            return (0);
        }
        return(initialise(my_strdup(av[1])));
    }
    return (84);
}
