/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** display the usage
*/

#include "./../include/runner.h"

void    display_the_usage(void)
{
    int size = 1543;
    int fd = open("src/usage", O_RDONLY);
    char    *str = malloc(sizeof(char) * (size + 1));

    read(fd, str, size);
    str[size] = '\0';
    my_putstr(str);
    close(fd);
    free(str);
}
