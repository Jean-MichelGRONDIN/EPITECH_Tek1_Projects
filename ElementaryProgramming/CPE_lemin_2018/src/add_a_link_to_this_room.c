/*
** EPITECH PROJECT, 2019
** CPE_lemin_2018
** File description:
** add a link to the room given as parameter exept if the link already exist
*/

#include "./../include/lemin.h"

link_t  *add_a_link_to_this_room(room_t *to_add, link_t *link)
{
    link_t  *tmp = link;
    link_t  *new = malloc(sizeof(*new));

    new->next = NULL;
    new->room = to_add;
    if (link == NULL)
        return (new);
    while (link->next != NULL) {
        if (link->room == new->room) {
            free(new);
            new = NULL;
            return (tmp);
        }
        link = link->next;
    }
    link->next = new;
    return (tmp);
}