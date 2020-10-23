/*
** EPITECH PROJECT, 2019
** CPE_lemin_2018
** File description:
** first function called
*/

#include "./../include/lemin.h"

void    print_without_comments(char *str)
{
    int i = 0;
    int end = -1;

    while (str[i] != '\0' && end == -1) {
        if (str[i] == '#' && ((i != (my_strlen(str) - 1) && str[i + 1] != '#') && (i == 0 || str[i - 1] != '#'))) {
//            my_putchar('\n');
            end = 0;
        } else
            my_putchar(str[i]);
        i = i + 1;
    }
}

void    alternative(int ac, char **av)
{
    char    *str = NULL;
    size_t  len = 0;
    int nread = 1;

    while ((nread = getline(&str, &len, stdin)) != -1) {
        print_without_comments(str);
        str = free_cleanly_this_str(str);
    }
}

int lemin(int ac, char **av)
{
    room_t  *rooms = NULL;
    int i = 0;
    int nb = 0;
//
    rooms = create_this_room(my_strdup("1 23 3"), rooms);
    rooms = create_this_room(my_strdup("2 16 7"), rooms);
    rooms = create_this_room(my_strdup("3 16 3"), rooms);
    rooms = create_this_room(my_strdup("4 16 5"), rooms);
    rooms = create_this_room(my_strdup("5 9 3"), rooms);
    rooms = create_this_room(my_strdup("6 1 0"), rooms);
    rooms = create_this_room(my_strdup("7 4 8"), rooms);
    rooms = create_this_room(my_strdup("0 9 5"), rooms);
//
    rooms = create_link_to_this_room("0-4", rooms);
    rooms = create_link_to_this_room("0-6", rooms);
    rooms = create_link_to_this_room("1-3", rooms);
    rooms = create_link_to_this_room("4-3", rooms);
    rooms = create_link_to_this_room("5-2", rooms);
    rooms = create_link_to_this_room("3-5", rooms);
    rooms = create_link_to_this_room("4-2", rooms);
    rooms = create_link_to_this_room("2-1", rooms);
    rooms = create_link_to_this_room("7-6", rooms);
    rooms = create_link_to_this_room("7-2", rooms);
    rooms = create_link_to_this_room("7-4", rooms);
    rooms = create_link_to_this_room("6-5", rooms);
//
    while (rooms != NULL) {
        while (rooms->link != NULL) {
            my_printf("[%s] est liées a la sale [%s]\n", rooms->name, rooms->link->room->name);
            rooms->link = rooms->link->next;
            nb = nb + 1;
        }
        my_printf("voila le nom de la room %i : [%s], avec %i links\n", i, rooms->name, nb);
        i = i + 1;
        rooms = rooms->next;
        nb = 0;
    }
    return (0);
}
