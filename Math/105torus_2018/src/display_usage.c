/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** display the usage
*/

#include "./../include/torus.h"

void    display_the_usage(void)
{
    int size = 375;
    int fd = open("src/usage", O_RDONLY);
    char    *str = malloc(sizeof(char) * (size + 1));

    str[size] = '\0';
    read(fd, str, size);
    printf("%s\n", str);
    close(fd);
}
