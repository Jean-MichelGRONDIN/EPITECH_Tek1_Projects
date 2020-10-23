/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** concatenate n character from src to dust
*/

#include <stdlib.h>

int nb_ncharacter(char const *str)
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

char    *my_strncat_two(char *dust, char const *src, int limit)
{
    int nb_dust = 0;
    int index_src = 0;

    nb_dust = nb_ncharacter(dust);
    while (nb_dust != limit) {
        dust[nb_dust] = src[index_src];
        index_src = index_src + 1;
        nb_dust = nb_dust + 1;
    }
    dust[nb_dust + 1] = '\0';
    return (dust);
}

char    *caze_null_or_zero_or_less(char *dust, int nb)
{
    if (dust == NULL){
        return (NULL);
    }
    if (nb < 0){
        return (NULL);
    }
    return (dust);
}

char    *my_strncat(char *dust, char const *src, int nb)
{
    int leter_max = 0;
    int index_leter_n = 0;
    int nb_dust = 0;

    nb_dust = nb_ncharacter(dust);
    leter_max = nb_dust + (nb_ncharacter(src) + 1);
    if (dust == NULL || nb <= 0) {
        return (caze_null_or_zero_or_less(dust, nb));
    } else if (nb <= leter_max + 1) {
        index_leter_n = leter_max - (leter_max - nb);
        return (my_strncat_two(dust, src, index_leter_n));
    } else {
        return (my_strncat_two(dust, src, leter_max));
    }
}
