/*
** EPITECH PROJECT, 2019
** asm
** File description:
** check_intructions
*/

#include "asm.h"

int check_instructions(char **file)
{
    int n = get_this_line_index(file, COMMENT_CMD_STRING) == -1 ? 1 : 2;
    char    ***all = get_all_op(file + n);
    int i = 0;

    if (all == NULL)
        return (0);
    while (all[i] != NULL) {
        if (check_instruction_exist(all[i]) != 0) {
            all = free_triple_strtab(all);
            return (84);
        }
        i = i + 1;
    }
    all = free_triple_strtab(all);
    return (0);
}