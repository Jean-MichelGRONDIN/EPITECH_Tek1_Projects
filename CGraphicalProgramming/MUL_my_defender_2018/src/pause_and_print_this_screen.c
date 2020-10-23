/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** go into a loop (pause) and print the screen passed as parameter
*/

#include "./../include/defender.h"

int event_of_pause_print_screen_window(sfRenderWindow *window,
    sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        if (event->type == sfEvtClosed)
            return (1);
        if (event->type == sfEvtKeyPressed &&
            event->key.code == sfKeyEscape)
            return (1);
    }
    return (-2);
}

void    pause_and_print_this_screen(sfRenderWindow *window, char *path)
{
    obj_t   *bg = init_this_background(path);
    sfEvent event;
    int choice = -2;

    while (choice == -2 && sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        sfRenderWindow_drawSprite(window, bg->sprite, NULL);
        choice = event_of_pause_print_screen_window(window, &event);
    }
}