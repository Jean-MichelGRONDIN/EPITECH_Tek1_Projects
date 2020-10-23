/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** init and launch the norm checker
*/

#include "./../include/my_norm.h"

int launch_the_norm_checker(char *path)
{
    file_t  *files = NULL;

    files = find_all_files(path, files);
    while (files != NULL) {
        check_that_file(files);
        files = files->next;
        /* i = i + 1; */
    }
    /* my_printf("nb de truc que y'a dedans: %i\n", i); */
    return (0);
}
