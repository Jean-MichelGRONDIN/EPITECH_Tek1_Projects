/*
** EPITECH PROJECT, 2018
** CPoll_Day08_2018 my_show_word_array_c
** File description:
** displays the content of an array of words
*/

#include <stddef.h>
#include "./my.h"

int con_nb_max_line(char * const *tab)
{
    int index = 0;

    while (tab[index] != NULL) {
        index = index + 1;
    }
    return (index);
}

int my_show_word_array(char * const *tab)
{
    int nb_words = 0;
    int index_word = 0;
    int nb_line = con_nb_max_line(tab);

    while (nb_words < nb_line) {
        while (tab[nb_words][index_word]) {
            my_putchar(tab[nb_words][index_word]);
            index_word = index_word + 1;
        }
        my_putchar('\n');
        nb_words = nb_words + 1;
        index_word = 0;
    }
    return (0);
}
