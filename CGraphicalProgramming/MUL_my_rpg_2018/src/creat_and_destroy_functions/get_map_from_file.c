/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** read the map file and return it's data into a linkedlist
*/

#include "./../../include/rpg.h"

map_pieces_t    *free_map_pieces(map_pieces_t *map)
{
    map_pieces_t    *tmp = NULL;

    while (map != NULL) {
        tmp = map->next;
        free(map);
        map = tmp;
    }
    return (map);
}

map_pieces_t    *add_this_piece(map_pieces_t *list, int nb)
{
    map_pieces_t    *tmp = list;
    map_pieces_t    *new = malloc(sizeof(*new));

    new->n = nb;
    new->next = NULL;
    if (list == NULL)
        return (new);
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = new;
    return (tmp);
}

map_pieces_t    *get_map_from_file(char *path)
{
    char    *file = read_this_file(path);
    map_pieces_t    *map = NULL;
    int i = 0;
    char    *nb = NULL;

    if (file == NULL)
        return (NULL);
    i = count_until_not_line_finisher(file, "\n, \t");
    while (file[i] != '\0') {
        nb = my_strndup(&(file[i]),
            count_until_line_finisher(&(file[i]), "\n, \t"));
        map = add_this_piece(map, my_getnbr(nb));
        nb = free_cleanly_this_str(nb);
        i = i + count_until_line_finisher(&(file[i]), "\n, \t");
        i = i + count_until_not_line_finisher(&(file[i]), "\n, \t");
    }
    file = free_cleanly_this_str(file);
    return (map);
}
