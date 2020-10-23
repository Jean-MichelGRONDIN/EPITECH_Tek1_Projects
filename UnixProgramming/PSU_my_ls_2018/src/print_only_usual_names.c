/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** check if we display this name
*/

#include "./../include/my_ls.h"

int is_him_a_usual_file_name(char *name)
{
    if (name[0] == '.') {
        return (0);
    }
    return (1);
}

void    print_only_usual_names(char *file_name, int nb)
{
    if (is_him_a_usual_file_name(file_name) == 1) {
        if (nb != 0)
            my_putstr("  ");
        my_putstr(file_name);
    }
}
