/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** get next line project
*/

#include "./../include/my.h"
#include <stdlib.h>
#include <unistd.h>

int is_there_a_line_finisher(char *str)
{
    int i  = 0;
    int nb_line = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0') {
        if (str[i] == '\n')
            nb_line = nb_line + 1;
        i = i + 1;
    }
    return (nb_line);
}

char    *read_till_next_line(int fd, char *res)
{
    static  int ret = 1;
    char    *str = malloc(sizeof(char) * (READ_SIZE + 1));

    while (is_there_a_line_finisher(res) == 0 && ret > 0) {
        ret = read(fd, str, READ_SIZE);
        if (ret > 0) {
            str[ret] = '\0';
            res = my_strcat(res, str);
        }
    }
    str = free_cleanly_this_str(str);
    return (res);
}

char    *cut_cleanly_this_str(char *str, int n)
{
    char    *tmp = NULL;

    tmp = my_strdup(str);
    str = free_cleanly_this_str(str);
    if (tmp == NULL)
        return (str);
    else if (tmp[n] != '\0')
        str = my_strdup(&(tmp[n + 1]));
    else
        str = my_strdup(&(tmp[n]));
    tmp = free_cleanly_this_str(tmp);
    return (str);
}

char    *get_next_line(int fd)
{
    static  char    *str = NULL;
    char    *res = NULL;

    res = read_till_next_line(fd, res);
    str = my_strcat(str, res);
    res = free_cleanly_this_str(res);
    if (str == NULL)
        return NULL;
    res = my_strndup(str, (count_until_line_finisher(str, "\n") + 1));
    str = cut_cleanly_this_str(str, count_until_line_finisher(str, "\n"));
    return (res);
}
