/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** allocated a 2d array tab and return it
*/

#include "./../include/sokoban.h"

int find_nb_lines(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            nb = nb + 1;
        }
        i = i + 1;
    }
    nb = nb + 1;
    return (nb);
}

int *find_lines_len(int nb_line, char *str)
{
    int *line_len = malloc(sizeof(int) * nb_line);
    int i = 0;
    int remember = -1;
    int line = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            line_len[line] = i - remember;
            remember = i;
            line = line + 1;
        }
        i = i + 1;
    }
    line_len[line] = i - remember;
    remember = i;
    return (line_len);
}

world_t *find_lenght(world_t *world)
{
    world->y_max = find_nb_lines(world->str);
    world->line_len = find_lines_len(world->y_max, world->str);
    return (world);
}

char    **alloc_2d_tab(int y_max, int *line_len)
{
    char    **tab = malloc(sizeof(char *) * y_max);
    int i = 0;

    while (i != y_max) {
        tab[i] = malloc(sizeof(char) * line_len[i]);
        tab[i] = my_memset(tab[i], '~', line_len[i]);
        i = i + 1;
    }
    return (tab);
}
