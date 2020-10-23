/*
** EPITECH PROJECT, 2018
** CPoll_Day08_2018 my_show_word_array_c
** File description:
** displays the content of an array of words
*/

#include <stddef.h>
#include "./../include/my.h"

int my_show_word_array(char * const *tab, char *separator)
{
    int i = 0;

    if (tab == NULL)
        return (-1);
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        if (separator != NULL)
            my_putstr(separator);
        i = i + 1;
    }
    return (0);
}
