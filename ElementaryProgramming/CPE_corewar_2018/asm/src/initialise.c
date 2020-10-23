/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** initialise
*/

#include "asm.h"

int initialise(char *path)
{
    char    **file = load_this_file_cleanly(path);

    if (file == NULL)
        return (84);
    if (check_this_file(file) != 0) {
        file = free_cleanly_str_tab(file);
        return (84);
    }
    lunch_asm(path, file);
    file = free_cleanly_str_tab(file);
    return (0);
}