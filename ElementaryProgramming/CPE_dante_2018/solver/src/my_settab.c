/*
** EPITECH PROJECT, 2019
** settab
** File description:
** settab
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

char **my_settab(char *path)
{
    FILE *fd;
    char *line = NULL;
    size_t len = 0;
    ssize_t n;
    int x = 0;
    char **tab = NULL;

    if ((fd = fopen(path, "r")) == NULL)
        return (NULL);
    while ((n = getline(&line, &len, fd)) != -1)
        x++;
    fclose(fd);
    fd = fopen(path, "r");
    tab = malloc(sizeof(char *) * (x + 1));
    x = 0;
    while ((n = getline(&line, &len, fd)) != -1) {
        tab[x] = my_strdup(line);
        x++;
    }
    tab[x] = NULL;
    return (tab);
}
