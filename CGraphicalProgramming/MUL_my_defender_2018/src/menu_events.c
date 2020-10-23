/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** analyse events in the menu
*/

#include "./../include/defender.h"

void    did_him_press_credit_or_how_to_play(sfRenderWindow *window,
    sfVector2i m_pos, obj_t **bt)
{
    if (sfFloatRect_contains(&bt[2]->rect, m_pos.x, m_pos.y))
        pause_and_print_this_screen(window, "./assets/credit.png");
    if (sfFloatRect_contains(&bt[3]->rect, m_pos.x, m_pos.y))
        pause_and_print_this_screen(window, "./assets/how_to_play.png");
}

int did_him_press_play(sfVector2i m_pos, obj_t *bt)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        return (1);
    } else
        return (0);
}

int did_him_press_exit(sfVector2i m_pos, obj_t *bt)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        return (1);
    } else
        return (0);
}

int analyse_event(sfRenderWindow *window,
    sfEvent *event, obj_t **buttons, sfVector2i m_pos)
{
    if (event->type == sfEvtMouseButtonPressed) {
        if (did_him_press_play(m_pos, buttons[0]) == 1)
            return (GAME);
        if (did_him_press_exit(m_pos, buttons[1]) == 1)
            return (CLOSE);
        did_him_press_credit_or_how_to_play(window, m_pos, buttons);
    }
    if (event->type == sfEvtClosed)
        return (CLOSE);
    return (-1);
}

int menu_events(sfRenderWindow *window, sfEvent *event,
    obj_t **buttons, sfVector2i m_pos)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        return (analyse_event(window, event, buttons, m_pos));
    }
    return (-1);
}