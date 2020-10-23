/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** check_nbr_arg
*/

#include "asm.h"

int check_arg(char **tab, int i, int nb)
{
    int res = my_strtab_len(tab) - (nb + 1);

    if (res == op_tab[i].nbr_args)
        return (check_type_para(tab));
    else if (res < op_tab[i].nbr_args) {
        my_printf("The argument given to the instruction is invalid.\n");
        return (84);
    } else {
        my_printf("Too many arguments given to the instruction.\n");
        return (84);
    }
    return (0);
}

int check_nbr_arg_instruction(char **tab)
{
    int i = 0;

    while (op_tab[i].mnemonique != 0) {
        if (my_strcmp(op_tab[i].mnemonique, tab[0]) == 0)
            return (check_arg(tab, i, 0));
        if (my_strcmp(op_tab[i].mnemonique, tab[1]) == 0)
            return (check_arg(tab, i, 1));
        i = i + 1;
    }
    return (84);
}