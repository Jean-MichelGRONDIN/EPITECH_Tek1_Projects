/*
** EPITECH PROJECT, 2019
** print prompt
** File description:
** prompt
*/

#include "./../include/minishell.h"

void print_prompt(void)
{
    char *path = getcwd(NULL, 0);

    if (isatty(0) != 1)
        return;
    my_putstr(CBOLD);
    my_putchar('[');
    if (path != NULL) {
        my_putstr(CCYAN);
        my_putstr(path);
        my_putstr(CRS);
    }
    my_putstr(CBOLD);
    my_putstr("]> ");
    my_putstr(CRS);
}
