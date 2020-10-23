/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** action for the pause menu
*/

#include "./../include/defender.h"

int did_him_press_pause_menu(sfVector2i m_pos, obj_t *bt)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        return (1);
    } else
        return (0);
}

int did_him_press_pause_play(sfVector2i m_pos, obj_t *bt)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        return (1);
    } else
        return (0);
}

int did_him_press_pause_exit(sfVector2i m_pos, obj_t *bt)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        return (1);
    } else
        return (0);
}

int analyse_pause_event(sfEvent *event, obj_t **buttons, sfVector2i m_pos)
{
    if (event->type == sfEvtMouseButtonPressed) {
        if (did_him_press_pause_play(m_pos, buttons[0]) == 1)
            return (-1);
        if (did_him_press_pause_exit(m_pos, buttons[1]) == 1)
            return (CLOSE);
        if (did_him_press_pause_menu(m_pos, buttons[2]) == 1)
            return (MENU);
    }
    if (event->type == sfEvtClosed)
        return (CLOSE);
    if (event->type == sfEvtKeyPressed)
        if (event->key.code == sfKeyEscape)
            return (-1);
    return (-2);
}

int pause_menu_events(sfRenderWindow *window, sfEvent *event,
    obj_t **buttons, sfVector2i m_pos)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        return (analyse_pause_event(event, buttons, m_pos));
    }
    return (-2);
}