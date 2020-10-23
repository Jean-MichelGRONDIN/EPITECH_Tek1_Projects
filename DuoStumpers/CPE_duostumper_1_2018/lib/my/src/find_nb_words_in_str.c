/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** find the nb of words in a string
*/

#include "./../include/my.h"
#include <stdlib.h>

int find_nb_words_in_str(char const *str, char *enders)
{
    int i = 1;
    int nb = 0;

    if (str == NULL)
        return (-84);
    if (str[0] == '\0')
        return (0);
    if (my_is_in(str[0], enders) == 0)
        nb = nb + 1;
    while (str[i] != '\0') {
        if (my_is_in(str[i], enders) == 0 && my_is_in(str[i - 1], enders)) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}
