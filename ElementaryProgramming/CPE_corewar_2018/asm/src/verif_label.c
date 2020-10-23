/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** verif label
*/

#include "asm.h"

int verif_str(char *str, char *cmp)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        while (cmp[nb] != '\0' && cmp[nb] != str[i])
            nb = nb + 1;
        if (cmp[nb] == '\0')
            return (1);
        nb = 0;
        i = i + 1;
    }
    return (0);
}

int verif_label(label_t *label)
{
    label_t *res = label;
    char *str = my_strdup((char *)LABEL_CHARS);

    while (res != NULL) {
        if (verif_str(res->name, str) == 1)
            return (84);
        res = res->next;
    }
    return (0);
}
