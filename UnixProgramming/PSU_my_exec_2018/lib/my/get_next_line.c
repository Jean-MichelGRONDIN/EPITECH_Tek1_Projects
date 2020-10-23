/*
** EPITECH PROJECT, 2018
** CPE_getnextline_2018
** File description:
** read from a file directory and return the first line
*/

#include "./my.h"
#include <stdlib.h>
#include <unistd.h>

char    *assemb_these_strings(char *src, char *str, int size)
{
    int src_len = is_there_a_line_finisher(src, 0);
    char    *res = malloc(sizeof(char) * (src_len + size + 1));
    int i  = 0;

    res[src_len + size] = '\0';
    if (src != NULL) {
        while (src[i] != '\0') {
            res[i] = src[i];
            i = i + 1;
        }
    }
    i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        res[src_len + i] = str[i];
        i = i + 1;
    }
    res[src_len + i] = '\0';
    free(src);
    return (res);
}

int is_there_a_line_finisher(char *str, int action)
{
    int i  = 0;
    int nb_line = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0') {
        if (action == 1 && str[i] == '\n') {
            return (1);
        }
        if (action == 2 && str[i] == '\n') {
            nb_line = nb_line + 1;
        }
        i = i + 1;
    }
    if (action == 1)
        return (0);
    else if (action == 2)
        return (nb_line);
    else
        return (i);
}

char    *take_this_line(int fd, char *str, char *res)
{
    static  int end = 0;
    int size = 0;

    if (end == 1)
        return (NULL);
    size = read(fd, str, READ_SIZE);
    str[size] = '\0';
    while (is_there_a_line_finisher(str, 1) == 0 && size > 0) {
        res = assemb_these_strings(res, str, size);
        size = read(fd, str, READ_SIZE);
        str[size] = '\0';
    }
    if (size > 0)
        res = assemb_these_strings(res, str, size);
    else
        end = 1;
    return (res);
}

char    *when_still_something(char *str, char *res, int *nb_line)
{
    int i = 0;
    int i_two = 0;

    *nb_line = is_there_a_line_finisher(str, 2);
    while (str[i] != '\n' && str[i] != '\0') {
        i = i + 1;
    }
    if (str[i] == '\n')
        str[i] = '~';
    res = malloc(sizeof(char) * (is_there_a_line_finisher(str, 0) - i + 1));
    i = i + 1;
    while (str[i + i_two] != '\n' && str[i + i_two] != '\0') {
        res[i_two] = str[i + i_two];
        i_two = i_two + 1;
    }
    res[i_two] = '\0';
    return (res);
}

char    *get_next_line(int fd)
{
    static  char    *str = NULL;
    char    *res = NULL;
    int multiple_line = 0;

    if (fd < 0 || READ_SIZE < 1)
        return (NULL);
    if (str != NULL) {
        res = when_still_something(str, res, &multiple_line);
        if (multiple_line > 1) {
            return (res);
        }
    } else {
        str = malloc(sizeof(char) * (READ_SIZE + 1));
    }
    return (take_this_line(fd, str, res));
}
