/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** get_size
*/

#include "asm.h"

int get_type_arg(char *str)
{
    if ((str[0] == DIRECT_CHAR && str[1] == LABEL_CHAR)
        || ((str[0] == DIRECT_CHAR && str[1] != LABEL_CHAR &&
        my_str_is_int(str + 1)))) {
        if (str[0] == DIRECT_CHAR && str[1] == 0)
            return (84);
        return (T_DIR);
        }
    if (str[0] == 'r' && my_str_is_int(str + 1) &&
        my_getnbr(str + 1) < REG_NUMBER && my_getnbr(str + 1) > 0)
        return (T_REG);
    if (str[0] == LABEL_CHAR || my_str_is_int(str))
        return (T_IND);
    return (-84);
}

int get_dir_size(char **ints, int type, int step)
{
    if (type == T_DIR &&
        (my_strcmp(ints[0], "sti") == 0 ||
        my_strcmp(ints[0], "zjmp") == 0 ||
        my_strcmp(ints[0], "ldi") == 0)) {
        step++;
        return (IND_SIZE);
    }
    step++;
    return (DIR_SIZE);
}

int get_size_param(char **ints)
{
    static int step = 1;
    int type;

    if (!ints[step]) {
        step = 1;
        return (-1);
    }
    type = get_type_arg(ints[step]);
    if (type == T_REG) {
        step++;
        return (1);
    }
    if (type == T_IND) {
        step++;
        return (IND_SIZE);
    }
    step++;
    return (get_dir_size(ints, type, step));
}

int get_size_instruction(char **file)
{
    int res = 0;
    int nb;

    if (!file[0])
        return (0);
    while ((nb = get_size_param(file)) != -1)  {
        res += nb;
    }
    if ((my_strcmp(file[0], "live") == 0 ||
        my_strcmp(file[0], "zjmp") == 0 ||
        my_strcmp(file[0], "fork") == 0 ||
        my_strcmp(file[0], "lfork") == 0))
        res += 1;
    else
        res += 2;
    return (res);
}

int get_prog_size(char ***all_op)
{
    int i = 0;
    int j = 0;
    int res = 0;

    if (all_op == NULL)
        return (0);
    for (i = 0; all_op[i]; i++) {
        for (j = 0; op_tab[j].mnemonique
            && my_strcmp(all_op[i][0], op_tab[j].mnemonique) != 0; j++);
        if (op_tab[j].mnemonique)
            res += get_size_instruction(all_op[i]);
        if (!op_tab[j].mnemonique
            && all_op[i][0][my_strlen(all_op[i][0]) - 1] == LABEL_CHAR)
            res += get_size_instruction(all_op[i] + 1);
    }
    return (res);
}
