/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** add this obj to the linked list
*/

#include "./../include/my_norm.h"

file_t *add_to_list(char *name, char *dir, char type, file_t *files)
{
    file_t  *tmp = files;
    file_t  *new = malloc(sizeof(*new));

    new->name = my_strdup(name);
    new->path = my_strdup(dir);
    new->path = my_strcat(new->path, name);
    new->type = type;
    new->next = NULL;
    if (files == NULL)
        return (new);
    else {
        while (files->next != NULL) {
            files = files->next;
        }
        files->next = new;
    }
    return (tmp);
}
