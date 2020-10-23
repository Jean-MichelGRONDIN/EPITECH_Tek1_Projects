/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** check_instruction_exist
*/

#include "asm.h"

int is_an_instruction(char *str)
{
    int i = 0;

    while (op_tab[i].mnemonique != 0) {
        if (my_strcmp(str, op_tab[i].mnemonique) == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}

int is_a_label(char *str)
{
    if (my_strlen(str) > 1 &&
    how_many_of_that_char(str, LABEL_CHAR) == 1 &&
    str[my_strlen(str) - 1] == LABEL_CHAR) {
        return (0);
    }
    return (1);
}

int check_instruction_exist(char **line)
{
    if (is_an_instruction(line[0]) == 0) {
        return (check_nbr_arg_instruction(line));
    }
    if (is_a_label(line[0]) == 0) {
        if (my_strtab_len(line) == 1)
            return (0);
        if (is_an_instruction(line[1]) == 0)
            return (check_nbr_arg_instruction(line));
    }
    my_pstrerr("Invalid instruction.\n");
    return (84);
}