/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** give a str and it return an arr with one word by line
*/

#include "./../include/my.h"
#include <stdlib.h>

char    **my_str_to_word_array_v2(char const *str, char *enders)
{
    int len = find_nb_words_in_str_v2(str, enders);
    char    **arr = malloc(sizeof(char *) * (len + 1));
    int i = 1;
    int line = 0;

    arr[len] = NULL;
    if (my_is_in(str[0], enders) == 1) {
        arr[line] = my_strndup(&(str[0]), 1);
        line = line + 1;
    } else {
        arr[line] = my_strndup(&(str[0]), count_until_line_finisher(&(str[0]), enders) + 1);
        line = line + 1;
    }
    while (str[i] != '\0' && line != len) {
        if (my_is_in(str[i], enders) == 1 && my_is_in(str[i - 1], enders) == 1) {
            arr[line] = my_strndup(&(str[i]), 1);
            line = line + 1;
        }
        if (my_is_in(str[i], enders) == 0 && my_is_in(str[i - 1], enders) == 1) {
            arr[line] = my_strndup(&(str[i]), count_until_line_finisher(&(str[i]), enders) + 1);
            i = i + count_until_line_finisher(&(str[i]), enders);
            line = line + 1;
        }
        i = i + 1;
    }
    return (arr);
}
