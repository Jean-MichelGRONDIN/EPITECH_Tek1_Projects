/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** put_in_list
*/

#include "asm.h"

void put_in_list(char *elem, label_t **list)
{
    label_t *new = malloc(sizeof(label_t));
    label_t *index = *list;

    new->name = my_strdup(elem);
    new->next = NULL;
    if (*list == NULL) {
        *list = new;
        return;
    }
    while (index->next != NULL)
        index = index->next;
    index->next = new;
}
