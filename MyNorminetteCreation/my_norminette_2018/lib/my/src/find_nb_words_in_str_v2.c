/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** find the nb of words in a string
*/

#include "./../include/my.h"
#include <stdlib.h>

int find_nb_words_in_str_v2(char const *str, char *enders)
{
    int i = 1;
    int nb = 1;
    int a = 0;
    int b = 0;

    if (str == NULL)
        return (-84);
    if (str[0] == '\0')
        return (0);
    while (str[i] != '\0') {
        a = my_is_in(str[i], enders);
        b = my_is_in(str[i - 1], enders);
        if ((a == 0 && b == 1) || (a == 1 && b == 1)) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}
