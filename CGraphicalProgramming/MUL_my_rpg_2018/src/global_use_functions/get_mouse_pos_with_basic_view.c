/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** get_mouse_pos_with_basic_view
*/

#include "rpg.h"

sfVector2i  get_mouse_pos_with_basic_view(sfRenderWindow *window)
{
    sfVector2i  mouse = sfMouse_getPositionRenderWindow(window);

    mouse.x = mouse.x - 0 - 980 + 16;
    mouse.y = mouse.y - 0 - 492;
    return (mouse);
}