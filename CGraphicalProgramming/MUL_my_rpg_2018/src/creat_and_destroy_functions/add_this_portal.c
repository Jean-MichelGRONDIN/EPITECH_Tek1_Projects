/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** add this portal to the list
*/

#include "./../include/rpg.h"

portal_t    *free_portals_list(portal_t *p)
{
    portal_t    *tmp = NULL;

    while (p != NULL) {
        tmp = p->next;
        free(p);
        p = NULL;
        p = tmp;
    }
    return (p);
}

portal_t    *init_this_portal(char *str)
{
    portal_t    *new = malloc(sizeof(*new));
    char    **tab = my_str_to_word_array(str, ";");

    new->from.left = my_getnbr(tab[0]);
    new->from.top = my_getnbr(tab[1]);
    new->from.height = my_getnbr(tab[2]);
    new->from.width = my_getnbr(tab[3]);
    new->to.x = my_getnbr(tab[4]);
    new->to.y = my_getnbr(tab[5]);
    new->next = NULL;
    tab = free_cleanly_str_tab(tab);
    return (new);
}

portal_t    *add_this_portal(portal_t *list, char *arg)
{
    portal_t    *tmp = list;
    portal_t    *new = init_this_portal(arg);

    if (list == NULL)
        return (new);
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = new;
    return (tmp);
}