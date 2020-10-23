/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** init the nb of stick on each lines
*/

#include "./../include/match.h"

char    *init_nb_sticks_by_line(int nb_line)
{
    int i  = 1;
    char    *st_by_line = malloc(sizeof(char) * (nb_line + 3));

    st_by_line[nb_line + 2] = '\0';
    st_by_line[0] = 0;
    st_by_line[nb_line + 1] = 0;
    while (i <= nb_line) {
        st_by_line[i] = i + (i - 1);
        i = i + 1;
    }
    return (st_by_line);
}
