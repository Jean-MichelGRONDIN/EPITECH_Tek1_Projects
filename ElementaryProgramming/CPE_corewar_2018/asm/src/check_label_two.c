/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** check_label_two
*/

#include "asm.h"

int is_it_good(label_t *index, char *str)
{
    int compt = 0;

    while (index != NULL) {
        if (my_strcmp(index->name, str) == 0)
            compt = compt + 1;
        if (compt == 2)
            return (84);
        index = index->next;
    }
    return (0);
}
