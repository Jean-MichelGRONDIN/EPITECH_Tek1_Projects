/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check that this file respect the norm
*/

#include "./../include/my_norm.h"

void    check_that_file(file_t *files)
{
    if (files->type == 'c')
        file_c_norm(files);
    else if (files->type == 'h')
        file_h_norm(files);
}
