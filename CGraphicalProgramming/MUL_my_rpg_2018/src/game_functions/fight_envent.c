/*
** EPITECH PROJECT, 2019
** sdqd
** File description:
** dqs
*/

#include "./../../include/rpg.h"

rpg_t   *manage_fight_events(sfRenderWindow *window,
    sfEvent *event, rpg_t *rpg)
{
    if (rpg->int_fight->step == 0
        && rpg->int_fight->pers->sat_player->step == NONEATT
        && rpg->int_fight->pers->sat_enm->step == NONEATT
        && event->type == sfEvtKeyPressed)
        rpg = fight_management(rpg, event);
    if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
        rpg->end = CLOSE;
    }
    return (rpg);
}

rpg_t   *fight_events(sfRenderWindow *window, sfEvent *event, rpg_t *rpg)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        rpg = manage_fight_events(window, event, rpg);
    }
    return (rpg);
}
