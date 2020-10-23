/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** last screen of the game the end screen
*/

#include "./../include/runner.h"

void    close_window_event(sfRenderWindow *window, sfEvent *event)
{
    if (event->type == sfEvtKeyPressed) {
        sfRenderWindow_close(window);
    }
    if (event->type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void    final_window(sfRenderWindow *window,
    sfEvent *event, rulers_t *rules)
{
    if (sfRenderWindow_isOpen(window)) {
        print_finale_screen(window, rules);
        sfRenderWindow_display(window);
    }
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, event)) {
            close_window_event(window, event);
        }
    }
    sfRenderWindow_destroy(window);
}
