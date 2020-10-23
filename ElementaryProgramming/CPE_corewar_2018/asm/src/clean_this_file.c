/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** clean_this_file
*/

#include "asm.h"

char    **clean_this_file(char **file)
{
    if (file == NULL)
        return (NULL);
    file = clean_comments_lines(file);
    file = clear_strtab_lines(file);
    return (file);
}