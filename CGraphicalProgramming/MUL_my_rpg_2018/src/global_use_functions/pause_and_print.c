/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** pause_and_print
*/

#include "rpg.h"

int event_of_pause_print_screen_window(sfRenderWindow *window,
    sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event->type == sfEvtKeyPressed &&
            event->key.code == sfKeyEscape)
            return (1);
    }
    return (-2);
}

void    pause_and_print_this_screen(sfRenderWindow *window, char *path)
{
    texture_t   *bg = init_texture_struc(path);
    sfEvent event;
    int choice = -2;

    set_view(window);
    while (choice == -2 && sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        sfRenderWindow_drawSprite(window, bg->sprite, NULL);
        choice = event_of_pause_print_screen_window(window, &event);
    }
    bg = free_this_texture(bg);
}