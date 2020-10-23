/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check the path and launch the prog
*/

#include "./../include/my_norm.h"

int initialise(char *arg)
{
    if (arg == NULL) {
        launch_the_norm_checker("./");
        return (0);
    }
    if (check_the_arg(arg) == 0) {
        if (arg[my_strlen(arg) - 1] != '/')
            arg = my_strcat(arg, "/");
        launch_the_norm_checker(arg);
        return (0);
    }
    return (84);
}
