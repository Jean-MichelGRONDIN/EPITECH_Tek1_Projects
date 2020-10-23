/*
** EPITECH PROJECT, 2019
** 107transfer_2018
** File description:
** check stars position
*/

#include "./../include/transfer.h"

int check_that_star(char *str, int i)
{
    char    *num = my_strdup("+-0123456789");

    if (my_is_in(str[i - 1], num) == 0 || my_is_in(str[i + 1], num) == 0) {
        num = free_cleanly_this_str(num);
        return (1);
    }
    num = free_cleanly_this_str(num);
    return (0);
}

int check_this_arg_stars_pos(char *str)
{
    int i = 0;

    if (str[0] == '*')
        return (1);
    if (my_strlen(str) > 1)
        i = i + 1;
    while (str[i + 1] != '\0') {
        if (str[i] == '*' && check_that_star(str, i) == 1)
            return (1);
        i = i +1;
    }
    if (str[i] == '*')
        return (1);
    return (0);
}

int check_stars_positions(int ac, char **av)
{
    int i = 0;

    while (i != ac) {
        if (check_this_arg_stars_pos(av[i]) == 1) {
            my_pstrerr("Error missplaced star detected in this argument :\n");
            my_pstrerr(av[i]);
            my_pcharerr('\n');
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
