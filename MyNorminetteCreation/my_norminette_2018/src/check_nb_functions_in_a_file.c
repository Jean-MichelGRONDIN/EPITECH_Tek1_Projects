/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check nb functions in a file
*/

#include "./../include/my_norm.h"

void    check_nb_functions_in_a_file(char **tab, file_t *files)
{
    int i = 6;
    int len = my_strtab_len(tab);
    int nb = 0;

    if (len > 6) {
        while (tab[i] != NULL) {
            if (is_a_function(tab, i) == 1) {
                nb = nb + 1;
            }
            i = i + 1;
        }
        if (nb > 5) {
            my_printf(COLOR_MAGENTA "[%s]l.%i" COLOR_RESET
            ": More than 5 functions in a file (actual :"
            COLOR_RED "%i" COLOR_RESET "),\n", files->path, (i+ 1), nb);
        }
    }
}
