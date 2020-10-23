/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** find the flags and do launch the right function
*/

#include "./../include/my_ls.h"

int flags_finder(char **av)
{
    if (my_strcmp(av[1], "-l") == 0) {
        return (l_argument());
    }
    if (my_strcmp(av[1], "-R") == 0) {
        return (r_uper_argument("./"));
    }
    return (84);
}
