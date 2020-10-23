/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** exit my shell
*/

#include "./../include/minishell.h"
// si en arg il n'y a que '-'
char    **my_exit_shell(char **env, char **args)
{
    int nb_args = my_strtab_len(args);

    if (nb_args > 2) {
        my_pstrerr("exit: Expression Syntax.\n");
        return (env);
    }
    if (nb_args == 1) {
        my_pstrerr("exit\n");
        exit(0);
    }
    if (check_if_there_is_only_exit_allowed_chars(args[1]) == 0) {
        my_pstrerr("exit\n");
        exit(my_getnbr(args[1]));
    }
    check_exit_syntaxe(args[1]);
    return (env);
}
