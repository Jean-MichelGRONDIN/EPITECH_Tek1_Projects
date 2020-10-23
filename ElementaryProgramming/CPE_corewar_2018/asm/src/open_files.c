/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** open_files
*/

#include "asm.h"

int get_file(char *str)
{
    int fd = 0;

    fd = open(str, O_RDONLY);
    return (fd);
}

char *get_new_name(char *str)
{
    char *res;
    int i = 0;
    int nb;

    for (nb = 0; str[nb] == '.' || str[nb] == '/'; nb++);
    for (i = nb; str[i] && str[i] != '.'; i++);
    str[i] = 0;
    res = my_strdup(str + nb);
    res = my_strcat(res, ".cor");
    return (res);
}

int get_new_cor(char *str)
{
    char *new_name = get_new_name(str);
    int fd;

    fd = open(new_name, O_CREAT|O_WRONLY, 00664);
    if (fd < 0)
        return (fd);

    return (fd);
}
