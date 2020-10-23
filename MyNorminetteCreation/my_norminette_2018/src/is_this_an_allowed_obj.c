/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** do this obj have read acces right
*/

#include "./../include/my_norm.h"

int is_this_an_allowed_obj(char *obj)
{
    struct  stat    buf;

    stat(obj, &buf);
    if ((buf.st_mode & S_IRUSR) == 0)
        return (-1);
    return (0);
}
