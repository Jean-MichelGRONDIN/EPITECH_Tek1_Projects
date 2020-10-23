/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** is this obj in the list of avoided obj
*/

#include "./../include/my_norm.h"

int is_this_to_avoid(char *name)
{
    char    **avoid = give_avoided_list();
    int i = 0;

    while (avoid[i] != NULL) {
        if (my_strcmp(avoid[i], name) == 0) {
            free_cleanly_str_tab(avoid);
            return (0);
        }
        i = i + 1;
    }
    free_cleanly_str_tab(avoid);
    return (1);
}
