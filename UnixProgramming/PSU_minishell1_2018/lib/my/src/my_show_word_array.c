/*
** EPITECH PROJECT, 2018
** CPoll_Day08_2018 my_show_word_array_c
** File description:
** displays the content of an array of words
*/

#include <stddef.h>
#include "./../include/my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        i = i + 1;
    }
    return (0);
}
