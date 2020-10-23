/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** return 1 if a file, 0 if directory, -1 if no access/read rights
*/

#include "./../include/my_norm.h"

int is_a_file(char *name, char *dir)
{
    char    *path = my_strdup(dir);
    struct  stat    buf;
    int type = 84;
    int returned = 84;

    path = my_strcat(path, name);
    returned = stat(path, &buf);
    if (returned == -1)
        return (-1);
    if ((buf.st_mode & S_IRUSR) == 0) {
        free_cleanly_this_str(path);
        return (-1);
    }
    type = S_ISREG(buf.st_mode) ? 1 : 0;
    free_cleanly_this_str(path);
    return (type);
}
