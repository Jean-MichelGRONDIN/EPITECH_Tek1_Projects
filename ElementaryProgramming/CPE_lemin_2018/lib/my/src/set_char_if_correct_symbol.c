/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** place matched character in possition i in a str if find a match
*/

#include "./../include/my.h"
#include <stdlib.h>

pattern_t    *initialise_pattern_table(int i, int i_tab)
{
    char    *patterns_buffer = my_strdup("iidiccssbbooSSxxXX%%~~");
    int size = my_strlen(patterns_buffer) / 2;
    pattern_t    *tab = malloc(sizeof(pattern_t) * size);

    while (patterns_buffer[i] != '\0') {
        tab[i_tab].pattern = patterns_buffer[i];
        i = i + 1;
        tab[i_tab].character = patterns_buffer[i];
        i = i + 1;
        i_tab = i_tab + 1;
    }
    return (tab);
}
