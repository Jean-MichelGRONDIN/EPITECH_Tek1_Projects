/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** extract the directory from a filepath
*/

#include "./../include/my_ls.h"

int find_dir_len(char *str)
{
    int last_slash = -1;
    int i  = 0;

    while (str[i] != '\0') {
        if (str[i] == '/') {
            last_slash = i;
        }
        i = i + 1;
    }
    return (last_slash);
}

char    *extract_the_directory(char *fp)
{
    int dir_len = find_dir_len(fp);
    int i = 0;
    char    *dir;

    if (dir_len < 0)
        exit(84);
    dir = malloc(sizeof(char) * (dir_len + 1));
    dir[dir_len] = '\0';
    while (i != (dir_len + 1)) {
        dir[i] = fp[i];
        i = i + 1;
    }
    return (dir);
}
