/*
** EPITECH PROJECT, 2019
** sqd
** File description:
** qsd
*/

#include "asm.h"

int check_param(char **arr, int j)
{
    int i = 0;

    for (i = 1; arr[i]; i++) {
        if (get_type_arg(arr[i]) == -84)
            return (84);
        if (!(get_type_arg(arr[i]) & op_tab[j].type[i - 1]))
            return (84);
    }
    return (0);
}

int check_type_para(char **inst)
{
    int i = 0;

    for (i = 0; op_tab[i].mnemonique
        && my_strcmp(inst[0], op_tab[i].mnemonique) != 0; i++);
    if (op_tab[i].mnemonique)
        return (check_param(inst, i));
    inst += 1;
    if (!inst[0])
        return (0);
    for (i = 0; op_tab[i].mnemonique
        && my_strcmp(inst[0], op_tab[i].mnemonique) != 0; i++);
    return (check_param(inst, i));
}