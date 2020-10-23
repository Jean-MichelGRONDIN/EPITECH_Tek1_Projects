/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check comments inside headers
*/

#include "./../include/my_norm.h"

void    check_line_header_comment(char **tab, int line, file_t *files)
{
    int i_line = line;
    int i = 0;

    while (tab[i_line][i] != '\0') {
        if (tab[i_line][i] == '/') {
            if (i < my_strlen(tab[i_line])) {
                if (tab[i_line][i + 1] == '/' ||
                    tab[i_line][i + 1] == '*') {
                    my_printf(COLOR_YELLOW "[%s]l.%i" COLOR_RESET
                    ": Care about forgotten comments inside headers,\n",
                    files->path, (i_line + 1));
                }
            }
        }
        i = i + 1;
    }
}

void    check_comment_in_headers(char **tab, file_t *files)
{
    int i = 6;
    int len = my_strtab_len(tab);

    if (len > 6)
        while (tab[i] != NULL) {
            check_line_header_comment(tab, i, files);
            i = i + 1;
        }
}
