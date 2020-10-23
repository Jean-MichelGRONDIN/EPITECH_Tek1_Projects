/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** return the list of avoided obj
*/

#include "./../include/my_norm.h"

char    **give_avoided_list(void)
{
    int nb = 5;
    char    **avoid = malloc(sizeof(char *) * (nb + 1));

    avoid[0] = my_strdup(".");
    avoid[1] = my_strdup("..");
    avoid[2] = my_strdup(".git");
    avoid[3] = my_strdup(".gitignore");
    avoid[4] = my_strdup("Makefile");
    avoid[5] = NULL;
    return (avoid);
}
