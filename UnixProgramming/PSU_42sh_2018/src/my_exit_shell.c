/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** exit my shell
*/

#include "./../include/minishell.h"
// si en arg il n'y a que '-'
char    **my_exit_shell(st_t st)
{
    int nb_args = my_strtab_len(st.args);

    if (nb_args > 2) {
        my_pstrerr("exit: Expression Syntax.\n");
        return (st.env);
    }
    if (nb_args == 1) {
        my_pstrerr("exit\n");
        exit(0);
    }
    if (check_if_there_is_only_exit_allowed_chars(st.args[1]) == 0) {
        my_pstrerr("exit\n");
        exit(my_getnbr(st.args[1]));
    }
    check_exit_syntaxe(st.args[1]);
    return (st.env);
}
