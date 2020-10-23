/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** initialise things to launch the prog
*/

#include "./../include/my_ls.h"

void    basic(char *filepath)
{
    char    *directorie = extract_the_directory(filepath);

    print_all_files_names(directorie);
}
