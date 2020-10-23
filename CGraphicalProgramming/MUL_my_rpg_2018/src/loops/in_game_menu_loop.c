/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** in_game_menu_loop
*/

#include "rpg.h"

rpg_t   *manage_in_menu_events(sfRenderWindow *window,
    sfEvent *event, rpg_t *rpg)
{
    if (event->type == sfEvtMouseButtonPressed)
        rpg->in_menu->pressed = 1;
    if (event->type == sfEvtKeyPressed)
        if (event->key.code == sfKeyEscape)
            rpg->in_menu->status = NO;
    if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
        rpg->end = CLOSE;
    }
    return (rpg);
}

rpg_t   *in_menu_events(sfRenderWindow *window, sfEvent *event, rpg_t *rpg)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        rpg = manage_in_menu_events(window, event, rpg);
    }
    return (rpg);
}

rpg_t   *manage_in_menu_button_events(rpg_t   *rpg, sfRenderWindow *window)
{
    if (check_this_menu_button(rpg->in_menu->in_buttons[0], window,
    rpg->in_menu->pressed) == 1)
        rpg->in_menu->status = NO;
    if (check_this_menu_button(rpg->in_menu->in_buttons[1], window,
    rpg->in_menu->pressed) == 1)
        rpg->end = MENU;
    if (check_this_menu_button(rpg->in_menu->in_buttons[2], window,
    rpg->in_menu->pressed) == 1)
        rpg->end = CLOSE;
    rpg->in_menu->pressed = 0;
    return (rpg);
}

rpg_t   *in_game_menu_loop(rpg_t *rpg, sfRenderWindow *window)
{
    sfEvent event;

    sfView_zoom(rpg->cam->camera, (1.20 * rpg->cam->zoom));
    sfView_setCenter(rpg->cam->camera, rpg->in_menu->v_pos);
    sfRenderWindow_setView(window, rpg->cam->camera);
    while (rpg->in_menu->status == YES && rpg->end == 0 &&
    sfRenderWindow_isOpen(window)) {
        rpg = manage_in_menu_button_events(rpg, window);
        rpg = in_menu_events(window, &event, rpg);
        window_action(window);
    }
    sfView_setCenter(rpg->cam->camera, rpg->player->player_anim->pos);
    sfRenderWindow_setView(window, rpg->cam->camera);
    sfView_zoom(rpg->cam->camera, 1 / (1.20 * rpg->cam->zoom));
    rpg->in_menu->status = NO;
    return (rpg);
}