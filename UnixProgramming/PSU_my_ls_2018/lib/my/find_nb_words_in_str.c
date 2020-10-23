/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** find the nb of words in a string
*/

#include "./my.h"

int find_nb_words_in_str(char const *str)
{
    int i = 1;
    int nb = 0;

    if (str[0] == '\0')
        return (0);
    if (my_is_in(str[0], " \t\n") == 0)
        nb = nb + 1;
    while (str[i] != '\0') {
        if (my_is_in(str[i], " \t\n") == 0 && my_is_in(str[i - 1], " \t\n")) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}
