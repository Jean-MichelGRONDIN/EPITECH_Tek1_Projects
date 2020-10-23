/*
** EPITECH PROJECT, 2019
** CPE_lemin_2018
** File description:
** find a room whose name is given and return it
*/

#include "./../include/lemin.h"

room_t  *find_this_room(char *to_find, room_t *rooms)
{
    room_t  *find = rooms;

    while (find != NULL && my_strcmp(find->name, to_find) == 1) {
        find = find->next;
    }
    return (find);
}