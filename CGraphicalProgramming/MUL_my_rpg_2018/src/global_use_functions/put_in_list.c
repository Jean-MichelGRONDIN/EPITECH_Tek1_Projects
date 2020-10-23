/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** put_in_list
*/

#include "./../../include/rpg.h"

void put_in_list(entity_t *elem, entity_list **list)
{
    entity_list *new = malloc(sizeof(entity_list));
    entity_list *index = *list;

    new->obj = elem;
    new->next = NULL;
    if (*list == NULL) {
        *list = new;
        return;
    }
    while (index->next != NULL)
        index = index->next;
    index->next = new;
}
