/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** check event and update rules
*/

#include "./../include/defender.h"

rules_t *manage_events(sfRenderWindow *window, sfEvent *event, rules_t *rules)
{
    if (event->type == sfEvtKeyPressed)
        if (event->key.code == sfKeyEscape)
            rules->choice = pause_menu(window);
    if (event->type == sfEvtMouseButtonPressed)
        rules->pressed = YES;
    if (event->type == sfEvtClosed)
        rules->choice = CLOSE;
    return (rules);
}

rules_t *check_events(sfRenderWindow *window, sfEvent *event, rules_t *rules)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        rules = manage_events(window, event, rules);
    }
    return (rules);
}