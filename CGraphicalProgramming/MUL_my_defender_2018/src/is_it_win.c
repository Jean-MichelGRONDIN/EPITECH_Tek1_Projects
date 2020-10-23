/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** is_it_win_or_loose
*/

#include "./../include/defender.h"

int get_number_of_enemies(list_t *list)
{
    list_t  *tmp = list;
    int nb = 0;

    while (tmp != NULL) {
        if (tmp->obj->type == ENEMY)
            nb = nb + 1;
        tmp = tmp->next;
    }
    return (nb);
}

rules_t *is_it_win(sfRenderWindow *window,
    list_t *list, rules_t *rules)
{
    if (rules->global_time->seconds > 153) {
        if (get_number_of_enemies(list) == 0) {
            rules->choice = MENU;
            pause_and_print_this_screen(window, "./assets/you_win.png");
        }
    }
    return (rules);
}