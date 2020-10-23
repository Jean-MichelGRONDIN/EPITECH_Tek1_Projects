/*
** EPITECH PROJECT, 2019
** CPE_lemin_2018
** File description:
** header of the project
*/

#ifndef __LEMIN_H__
#define __LEMIN_H__

#include "./include.h"

typedef struct  link {
    struct  room    *room;
    struct  link    *next;
} link_t;

typedef struct  room {
    char    *name;
    int data;
    struct  link    *link;
    struct  room    *next;
} room_t;

link_t  *add_a_link_to_this_room(room_t *to_add, link_t *link);

room_t  *find_this_room(char *to_find, room_t *rooms);

room_t  *create_link_to_this_room(char *str, room_t *rooms);

room_t  *create_this_room(char *str, room_t *rooms);

int lemin(int ac, char **av);

#endif