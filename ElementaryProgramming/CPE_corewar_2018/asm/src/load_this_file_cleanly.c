/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** load_this_file_cleanly
*/

#include "asm.h"

char    **load_this_file_cleanly(char *path)
{
    char    *file = read_this_file(path);
    char    **new = NULL;

    if (file == NULL)
        return (NULL);
    new = my_str_to_word_array(file, "\n");
    new = clean_this_file(new);
    return (new);
}