/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** menu_vents
*/

#include "rpg.h"

int manage_menu_events(sfRenderWindow *window, sfEvent *event)
{
    int ret = 0;

    if (event->type == sfEvtMouseButtonPressed)
        ret = 1;
    if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
        ret = CLOSE;
    }
    return (ret);
}

int menu_events(sfRenderWindow *window, sfEvent *event, int ret)
{
    int save = 0;

    while (sfRenderWindow_pollEvent(window, event)) {
        save = manage_menu_events(window, event);
    }
    if (save == CLOSE)
        return (CLOSE);
    if (ret == 0)
        ret = save;
    return (ret);
}