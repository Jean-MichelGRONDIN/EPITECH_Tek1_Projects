/*
** EPITECH PROJECT, 2019
** dqs
** File description:
** qd
*/

#include "asm.h"

void write_ind_par(int *fd_i, char *str, label_idx_t *new, char ***inst)
{
    unsigned int par;

    par = get_nb_param(str, new, fd_i[1], inst);
    par = little_to_big(par, IND_SIZE);
    write(fd_i[0], &par, IND_SIZE);
}

void write_dir_par(int *fd_i, char *str, label_idx_t *new, char ***inst)
{
    unsigned int par;
    int size = 0;

    if (get_index(inst, fd_i[1]))
        size = IND_SIZE;
    else
        size = DIR_SIZE;
    str += 1;
    par = get_nb_param(str, new, fd_i[1], inst);
    par = little_to_big(par, size);
    write(fd_i[0], &par, size);
    return;
}

void write_param(int fd, char ***all_op, int i, label_idx_t *new)
{
    int a = 0;
    int nb = 0;
    int res = 0;
    int fd_i[2] = {fd, 0};

    if (!all_op[i][0])
        return;
    for (a = 1; all_op[i][a]; a++) {
        fd_i[1] = i;
        nb = get_type_arg(all_op[i][a]);
        if (nb == T_REG) {
            res = my_getnbr(all_op[i][a] + 1);
            write(fd, &res, 1);
        }
        if (nb == T_IND)
            write_ind_par(fd_i, all_op[i][a], new, all_op);
        if (nb == T_DIR)
            write_dir_par(fd_i, all_op[i][a], new, all_op);
    }
}

void write_inst(label_idx_t *new, char ***all_op, int i, int fd)
{
    int j = 0;

    if (!all_op[i][0])
        return;
    for (j = 0; op_tab[j].mnemonique
        && my_strcmp(all_op[i][0], op_tab[j].mnemonique) != 0; j++);
    write(fd, &op_tab[j].code, 1);
    write_coding_byte(fd, all_op[i]);
    write_param(fd, all_op, i, new);
}

void    write_prog(int fd, char ***all_op)
{
    label_idx_t *new = get_all_label_rom(all_op);
    int i = 0;
    int j = 0;
    char **save;

    for (i = 0; all_op[i]; i++) {
        for (j = 0; op_tab[j].mnemonique
            && my_strcmp(all_op[i][0], op_tab[j].mnemonique) != 0; j++);
        if (op_tab[j].mnemonique)
            write_inst(new, all_op, i, fd);
        else {
            save = all_op[i];
            all_op[i] += 1;
            write_inst(new, all_op, i, fd);
            all_op[i] = save;
        }
    }
}
