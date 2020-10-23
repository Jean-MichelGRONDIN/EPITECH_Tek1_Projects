/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** add_to_arg_champ_list
*/

#include "../../include/corewar/corewar.h"

champ_arg_list_t    *free_arg_champ_list(champ_arg_list_t *list)
{
    champ_arg_list_t    *tmp = list;

    if (list == NULL)
    return (list);
    while (list != NULL) {
        tmp = list->next;
        list->name = free_cleanly_this_str(list->name);
        free(list);
        list = NULL;
        list = tmp;
    }
    return (list);
}

champ_arg_list_t    *add_to_arg_champ_list(char *c_name,
int c_number, int c_adress, champ_arg_list_t *list)
{
    champ_arg_list_t    *tmp = list;
    champ_arg_list_t    *new = malloc(sizeof(*new));

    new->name = my_strdup(c_name);
    new->prog_number = c_number;
    new->prog_adress = c_adress;
    new->next = NULL;
    if (list == NULL)
        return (new);
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new;
    return (list);
}