/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** pause menu
*/

#include "./../include/defender.h"

obj_t   *manage_pause_menu_button(obj_t *bt, sfVector2i m_pos)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        bt->part.left = bt->speed;
        sfSprite_setTextureRect(bt->sprite, bt->part);
    } else {
        if (bt->part.left != 0) {
            bt->part.left = 0;
            sfSprite_setTextureRect(bt->sprite, bt->part);
        }
    }
    return (bt);
}

void    draw_pause_menu_sprites(sfRenderWindow *window, obj_t **buttons)
{
    sfRenderWindow_drawSprite(window, buttons[0]->sprite, NULL);
    sfRenderWindow_drawSprite(window, buttons[1]->sprite, NULL);
    sfRenderWindow_drawSprite(window, buttons[2]->sprite, NULL);
}

int pause_menu(sfRenderWindow *window)
{
    obj_t   **buttons = init_pause_menu_buttons();
    sfVector2i  mouse_pos;
    sfEvent event;
    int choice = -2;

    while (choice == -2 && sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        mouse_pos = sfMouse_getPositionRenderWindow(window);
        buttons[0] = manage_pause_menu_button(buttons[0], mouse_pos);
        buttons[1] = manage_pause_menu_button(buttons[1], mouse_pos);
        buttons[2] = manage_pause_menu_button(buttons[2], mouse_pos);
        draw_pause_menu_sprites(window, buttons);
        choice = pause_menu_events(window, &event, buttons, mouse_pos);
    }
    buttons = free_this_obj_arr(buttons, 3);
    return (choice);
}