/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** chek that this is a good path
*/

#include "./../include/my_norm.h"

int check_the_arg(char *path)
{
    DIR *dir = opendir(path);

    if (dir == NULL) {
        my_pstrerr(COLOR_RED "Error, incorrect path, an error happened !"
        COLOR_RESET "\n");
        return (-1);
    }
    closedir(dir);
    return (0);
}
