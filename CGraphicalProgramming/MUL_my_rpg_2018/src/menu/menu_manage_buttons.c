/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** menu_manage_buttons
*/

#include "rpg.h"

int check_this_menu_button(buttons_t buttons, sfRenderWindow *window,
    int pressed)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfFloatRect tex_p = sfSprite_getGlobalBounds(buttons.button_text->sprite);
    int ret = 0;

    mouse.y += 70;
    if (sfFloatRect_contains(&tex_p,
    mouse.x, mouse.y) == sfTrue) {
        if (pressed == 1) {
            buttons.button_anim->part.left = 404;
            ret = 1;
        } else
            buttons.button_anim->part.left = 202;
    } else
        buttons.button_anim->part.left = 0;
    sfSprite_setTextureRect(buttons.button_text->sprite,
    buttons.button_anim->part);
    sfRenderWindow_drawSprite(window, buttons.button_text->sprite, NULL);
    return (ret);
}

int manage_menu_button_events(buttons_t *buttons, sfRenderWindow *window,
    int pressed)
{
    int ret = 0;

    if ((ret = check_this_menu_button(buttons[0], window, pressed)) == 1)
        return (GAME);
    if ((ret = check_this_menu_button(buttons[1], window, pressed)) == 1) {
        pause_and_print_this_screen(window, "assets/tuto.png");
        return (0);
    }
    if ((ret = check_this_menu_button(buttons[2], window, pressed)) == 1) {
        return (CLOSE);
    }
    return (ret);
}
