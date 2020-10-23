/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check the return obj of readdir
*/

#include "./../include/my_norm.h"

file_t  *check_res_of_readdir(char *directory, file_t *files,
    struct dirent *dirp)
{
    int file = 84;
    char    *save = my_strdup(directory);

    file = is_a_file(dirp->d_name, directory);
    if (file == 1) {
        files = see_if_it_is_counted(dirp->d_name, directory, files);
    } else if (file == 0 && is_this_to_avoid(dirp->d_name) == 1) {
        save = my_strcat(save, dirp->d_name);
        save = my_strcat(save, "/");
        files = find_all_files(save, files);
        save = free_cleanly_this_str(save);
        save = my_strdup(directory);
    }
    save = free_cleanly_this_str(save);
    return (files);
}
