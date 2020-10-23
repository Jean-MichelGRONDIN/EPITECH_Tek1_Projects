/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** menu of the game
*/

#include "./../include/defender.h"

void    draw_menu_sprites(sfRenderWindow *window,
    obj_t *background, obj_t **buttons, obj_t *logo)
{
    sfRenderWindow_drawSprite(window, background->sprite, NULL);
    sfRenderWindow_drawSprite(window, logo->sprite, NULL);
    sfRenderWindow_drawSprite(window, buttons[0]->sprite, NULL);
    sfRenderWindow_drawSprite(window, buttons[1]->sprite, NULL);
    sfRenderWindow_drawSprite(window, buttons[2]->sprite, NULL);
    sfRenderWindow_drawSprite(window, buttons[3]->sprite, NULL);
}

obj_t   **manage_all_buttons(sfVector2i mouse_pos, obj_t **buttons)
{
        buttons[0] = manage_button(buttons[0], mouse_pos);
        buttons[1] = manage_button(buttons[1], mouse_pos);
        buttons[2] = manage_button(buttons[2], mouse_pos);
        buttons[3] = manage_button(buttons[3], mouse_pos);
        return (buttons);
}

int menu_window(sfRenderWindow *window)
{
    obj_t   *background = init_this_background("./assets/menu_background.jpg");
    obj_t   **buttons = init_menu_buttons();
    obj_t   *logo = init_logo_menu();
    sfVector2i  mouse_pos;
    sfEvent event;
    int choice = -1;

    while (choice == -1 && sfRenderWindow_isOpen(window)) {
        window_action(window);
        mouse_pos = sfMouse_getPositionRenderWindow(window);
        buttons = manage_all_buttons(mouse_pos, buttons);
        draw_menu_sprites(window, background, buttons, logo);
        choice = menu_events(window, &event, buttons, mouse_pos);
    }
    background = free_this_obj(background);
    logo = free_this_obj(logo);
    buttons = free_this_obj_arr(buttons, 2);
    return (choice);
}
