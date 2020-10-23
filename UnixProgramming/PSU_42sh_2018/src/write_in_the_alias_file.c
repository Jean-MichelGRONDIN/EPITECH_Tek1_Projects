/*
** EPITECH PROJECT, 2019
** write in the alias file
** File description:
** write
*/

#include "./../include/minishell.h"

void write_end_of_file(char *str, char *file_path)
{
    int fd = open(file_path, O_WRONLY | O_APPEND);

    if (fd == -1)
        return;
    write(fd, str, my_strlen(str));
    write(fd, "\n", 1);
}

void write_alias_in_file(char **alias, char *file_path)
{
    int fd = open(file_path, O_WRONLY | O_TRUNC);

    if (fd == -1)
        return;
    for (int count = 0; alias[count]; count++) {
        write(fd, alias[count], my_strlen(alias[count]));
        write(fd, "\n", 1);
    }
}
