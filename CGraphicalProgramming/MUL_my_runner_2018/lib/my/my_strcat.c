/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** concatenate two strings
*/

#include <stdlib.h>

int nb_character(char const *str)
{
    int index = 0;

    if (str == NULL || str[0] == '\0') {
        return (-1);
    } else {
        while (str[index] != '\0') {
            index = index + 1;
        }
    }
    return (index - 1);
}

char    *my_strcat(char *dust, char const *src)
{
    int leter_max = 0;
    int nb_dust = 0;
    int index_src = 0;

    nb_dust = nb_character(dust);
    leter_max = nb_dust + (nb_character(src) + 1);
    if (dust == NULL) {
        return (NULL);
    } else {
        while (nb_dust != leter_max) {
            dust[nb_dust] = src[index_src];
            index_src = index_src + 1;
            nb_dust = nb_dust + 1;
        }
        return (dust);
    }
}
