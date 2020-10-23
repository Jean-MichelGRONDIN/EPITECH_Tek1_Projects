/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** check event and update rules
*/

#include "./../../include/rpg.h"

rpg_t   *manage_game_events(sfRenderWindow *window,
    sfEvent *event, rpg_t *rpg)
{
    if (event->type == sfEvtKeyPressed) {
        if (event->key.code == sfKeyEscape)
            rpg->in_menu->status = YES;
        rpg = key_management(rpg, event);
    }
    if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
        rpg->end = CLOSE;
    }
    return (rpg);
}

rpg_t   *game_events(sfRenderWindow *window, sfEvent *event, rpg_t *rpg)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        rpg = manage_game_events(window, event, rpg);
    }
    return (rpg);
}
