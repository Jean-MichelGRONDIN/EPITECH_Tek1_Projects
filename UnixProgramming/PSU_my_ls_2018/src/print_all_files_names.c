/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** print all files names lke ls without args
*/

#include "./../include/my_ls.h"

void    print_all_files_names(char const *path)
{
    DIR *directory = opendir(path);
    struct  dirent  *dirp = malloc(sizeof(*dirp));
    int nb_time = 0;

    while ((dirp = readdir(directory)) != NULL) {
        print_only_usual_names(dirp->d_name, nb_time);
        nb_time = nb_time + 1;
    }
    my_putchar('\n');
    closedir(directory);
}
