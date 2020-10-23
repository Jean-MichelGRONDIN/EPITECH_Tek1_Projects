/*
** EPITECH PROJECT, 2019
** CPE_lemin_2018
** File description:
** create a link between two rooms
*/

#include "./../include/lemin.h"

room_t  *create_link_to_this_room(char *str, room_t *rooms)
{
    char    **tab = my_str_to_word_array(str, "-");
    room_t  *room_one = find_this_room(tab[0], rooms);
    room_t  *room_two = find_this_room(tab[1], rooms);

    room_two->link = add_a_link_to_this_room(room_one, room_two->link);
    room_one->link = add_a_link_to_this_room(room_two, room_one->link);
    return (rooms);
}