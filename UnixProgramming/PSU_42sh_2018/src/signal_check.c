/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** signal_check
*/

#include "./../include/minishell.h"

void    signal_check(int sig)
{
    int ret = 0;

    if (WIFSIGNALED(sig)) {
        ret = WTERMSIG(sig);
        if (ret == 11) {
            my_putstr("Segmentation fault");
        } else if (ret == 8) {
            my_putstr("Floating exception");
        }
        if (__WCOREDUMP(sig) != 0)
            my_putstr(" (core dumped)\n");
        else
            my_putchar('\n');
    }
}
