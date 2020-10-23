/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** return a chained list that contain  all files
*/

#include "./../include/my_norm.h"

file_t  *find_all_files(char *directory, file_t *files)
{
    DIR *filedir = opendir(directory);
    struct  dirent  *dirp = malloc(sizeof(*dirp));

    if (is_this_an_allowed_obj(directory) == 0) {
        while ((dirp = readdir(filedir)) != NULL) {
            files = check_res_of_readdir(directory, files, dirp);
        }
    }
    closedir(filedir);
    return (files);
}
