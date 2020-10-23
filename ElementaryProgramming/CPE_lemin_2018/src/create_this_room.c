/*
** EPITECH PROJECT, 2019
** CPE_lemin_2018
** File description:
** creat this room and put it in the list
*/

#include "./../include/lemin.h"

room_t  *create_this_room(char *str, room_t *rooms)
{
    char    **tab = my_str_to_word_array(str, " ");
    room_t  *new = malloc(sizeof(*new));
    room_t  *tmp = rooms;

    new->name = my_strdup(tab[0]);
    new->next = NULL;
    new->link = NULL;
    new->data = 0;
    if (rooms == NULL)
        return (new);
    while (rooms->next != NULL) {
        rooms = rooms->next;
    }
    rooms->next = new;
    tab = free_cleanly_str_tab(tab);
    return (tmp);
}