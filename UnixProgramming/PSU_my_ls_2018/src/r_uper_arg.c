/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** manage when -l argument
*/

#include "./../include/my_ls.h"

int r_uper_argument(char *path)
{
    char    *newpath = NULL;
    DIR *directory = opendir(path);
    struct  stat    buf;
    struct  dirent  *dirp = malloc(sizeof(*dirp));

    while ((dirp = readdir(directory)) != NULL) {
        lstat(my_assemble_str(path, dirp->d_name), &buf);
        if (S_ISDIR(buf.st_mode)) {
            my_putstr("\n____\n____\n");
            newpath = my_assemble_str(path, dirp->d_name);
            newpath = my_assemble_str(newpath, "/");
            r_uper_argument(newpath);
        } else {
            print_only_usual_names(dirp->d_name, 2);
        }
    }
    closedir(directory);
    return (0);
}
