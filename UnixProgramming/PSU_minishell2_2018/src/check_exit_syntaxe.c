/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** check if syntaxe is got and if not don't exit print linked err msg
*/

#include "./../include/minishell.h"

void    check_exit_syntaxe(char *str)
{
    if ((str[0] >= '0' && str[0] <= '9') || str[0] == '-') {
        if (do_there_is_a_dot(str) == 1)
            my_pstrerr("exit: Badly formed number.\n");
        else
            my_pstrerr("exit: Expression Syntax.\n");
    } else
        my_pstrerr("exit: Expression Syntax.\n");
}
