/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** read all the file gived and return it as a string
*/

#include "./../include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char    *read_n_char_of_that_fd(int fd, int n)
{
    char    *str = malloc(sizeof(char) * (n + 1));
    int readed = -1;

    str[n] = '\0';
    readed = read(fd, str, n);
    if (readed <= 0) {
        str = free_cleanly_this_str(str);
        return (NULL);
    }
    str[readed] = '\0';
    return (str);
}

char    *read_this_file(char *path)
{
    int fd = open(path, O_RDONLY);
    char    *str = NULL;
    char    *tmp = NULL;

    if (fd == -1)
        return (NULL);
    str = malloc(sizeof(char) * (80 + 1));
    str[80] = '\0';
    str = read_n_char_of_that_fd(fd, 80);
    if (str == NULL) {
        str = free_cleanly_this_str(str);
        return (NULL);
    }
    while ((tmp = read_n_char_of_that_fd(fd, 80)) != NULL) {
        str = my_strcat(str, tmp);
        tmp = free_cleanly_this_str(tmp);
    }
    close(fd);
    return (str);
}
