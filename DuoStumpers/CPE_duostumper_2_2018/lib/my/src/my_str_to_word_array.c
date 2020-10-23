/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** give a str and it return an arr with one word by line
*/

#include "./../include/my.h"
#include <stdlib.h>

char    **my_str_to_word_array(char const *str, char *enders)
{
    int len = find_nb_words_in_str(str, enders);
    char    **arr = malloc(sizeof(char *) * (len + 1));
    int i = 0;
    int line = 0;

    arr[len] = NULL;
    while (str[i] != '\0' && line != len) {
        i = i + count_until_not_line_finisher(&(str[i]), enders);
        arr[line] = my_strndup(&(str[i]),
            count_until_line_finisher(&(str[i]), enders));
        line = line + 1;
        i = i + count_until_line_finisher(&(str[i]), enders);
    }
    return (arr);
}
