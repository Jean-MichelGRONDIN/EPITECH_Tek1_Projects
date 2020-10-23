/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** asm
*/

#include "asm.h"

int little_to_big(int nb, int size)
{
    unsigned int i = 1;
    char *c = (char*)&i;

    if (*c)
        if (size == 4)
            return (
            ((nb >> 24) & 0x0000000ff) |
            ((nb >> 8) & 0x0000ff00) |
            ((nb << 8) & 0x000ff0000) |
            ((nb << 24) & 0xff000000));
        else
            return (nb << 8) | ((nb >> 8) & 0xff);
    else
        return (nb);
}

int get_index(char ***inst, int i)
{
    if ((my_strcmp(inst[i][0], "sti") == 0 ||
        my_strcmp(inst[i][0], "zjmp") == 0 ||
        my_strcmp(inst[i][0], "ldi") == 0 ||
        my_strcmp(inst[i][0], "fork") == 0 ||
        my_strcmp(inst[i][0], "lldi") == 0 ||
        my_strcmp(inst[i][0], "lfork") == 0))
        return (1);
    return (0);
}

int lunch_asm(char *file_name, char **file)
{
    int cor_file = get_new_cor(file_name);
    char ***arr;

    if (cor_file < 0)
        return (84);
    arr = write_header(cor_file, file);
    if (arr != NULL)
        write_prog(cor_file, arr);
    close(cor_file);
    return (0);
}
