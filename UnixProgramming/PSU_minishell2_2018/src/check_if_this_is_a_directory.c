/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** return 0 if this path is a directory or else 1
*/

#include "./../include/minishell.h"

int check_if_this_is_a_directory(char *path)
{
    struct  stat    buf;
    int ret = 0;

    ret = lstat(path, &buf);
    if (ret == -1)
        return (-1);
    if (S_ISDIR(buf.st_mode))
        return (0);
    return (1);
}
