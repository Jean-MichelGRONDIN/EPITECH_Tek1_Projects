/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** manage when -l argument
*/

#include "./../include/my_ls.h"

int l_argument(void)
{
    DIR *directory = opendir("./");
    struct  dirent  *dirp = malloc(sizeof(*dirp));

    count_nb_basic_files_for_l_arg();
    while ((dirp = readdir(directory)) != NULL) {
        if (is_him_a_usual_file_name(dirp->d_name) == 1) {
            print_with_l_disposition(dirp->d_name);
        }
    }
    closedir(directory);
    return (0);
}
