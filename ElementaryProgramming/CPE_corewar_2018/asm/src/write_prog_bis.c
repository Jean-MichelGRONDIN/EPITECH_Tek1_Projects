/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** write_prog_bis
*/

#include "asm.h"

label_idx_t *put_in_list_label_idx(int idx, char *cm,  label_idx_t *my_list)
{
    label_idx_t *head = my_list;
    label_idx_t *new_label_idx_t;

    new_label_idx_t = malloc(sizeof(*new_label_idx_t));
    new_label_idx_t->idx = idx;
    new_label_idx_t->label = cm;
    new_label_idx_t->next = NULL;
    if (my_list == NULL)
        return (new_label_idx_t);
    head = my_list;
    while (my_list->next != NULL)
            my_list = my_list->next;
    my_list->next = new_label_idx_t;
    return (head);
}

label_idx_t *get_all_label_rom(char ***all_op)
{
    int i = 0;
    label_idx_t *new = NULL;

    for (i = 0; all_op[i]; i++) {
        if (all_op[i][0][my_strlen(all_op[i][0]) - 1] == LABEL_CHAR)
            new = put_in_list_label_idx(i, my_strdup(all_op[i][0]), new);
    }
    return (new);
}

char *get_binary_conding_byte(char **inst)
{
    char *str = NULL;
    int i = 1;
    int nb = 0;

    if (my_strcmp(inst[0], "live") == 0 || my_strcmp(inst[0], "zjmp") == 0
        || my_strcmp(inst[0], "fork") == 0 || my_strcmp(inst[0], "lfork") == 0)
        return (NULL);
    while (inst[i]) {
        nb = get_type_arg(inst[i]);
        i++;
        if (nb == T_REG)
            str = my_strcat(str, "01");
        if (nb == T_DIR)
            str = my_strcat(str, "10");
        if (nb == T_IND)
            str = my_strcat(str, "11");
    }
    if (i < 5)
        str = my_strcat(str, "00");
    return (str);
}

void write_coding_byte(int fd, char **inst)
{
    char *str = get_binary_conding_byte(inst);
    int byte;

    if (str == NULL)
        return;
    byte = convert_2_10(str);
    write(fd, &byte, 1);
}

int get_nb_param(char *str, label_idx_t *new, int i, char ***inst)
{
    int a = 0;
    int nb = 0;

    if (str[0] != LABEL_CHAR)
        return (my_getnbr(str));
    while (new && my_strcmp(new->label, my_strcat(str + 1, ":")) != 0)
        new = new->next;
    if (new->idx > i) {
        for (a = i; a != new->idx; a++)
            nb += get_size_instruction(inst[a]);
        return (nb);
    }
    for (a = new->idx; a != i; a++)
        if (inst[a][0][my_strlen(inst[a][0]) - 1] == LABEL_CHAR)
            nb += get_size_instruction(inst[a] + 1);
        else
            nb += get_size_instruction(inst[a]);
    return (-nb);
}
