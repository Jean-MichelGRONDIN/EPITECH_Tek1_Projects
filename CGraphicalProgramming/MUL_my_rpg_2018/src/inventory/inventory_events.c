/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** inventory_events
*/

#include "rpg.h"

rpg_t   *manage_inventory_events(sfRenderWindow *window,
    sfEvent *event, rpg_t *rpg)
{
    if (event->type == sfEvtKeyPressed)
        rpg = inventory_keys_management(rpg, event);
    if (event->type == sfEvtMouseButtonPressed)
        rpg->inventory->m_pressed = YES;
    if (event->type == sfEvtMouseButtonReleased)
        rpg->inventory->m_released = YES;
    if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
        rpg->end = CLOSE;
    }
    return (rpg);
}

rpg_t   *inventory_events(rpg_t *rpg, sfRenderWindow *window, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        rpg = manage_inventory_events(window, event, rpg);
    }
    return (rpg);
}