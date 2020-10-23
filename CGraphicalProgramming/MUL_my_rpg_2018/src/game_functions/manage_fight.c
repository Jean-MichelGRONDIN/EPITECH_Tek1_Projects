/*
** EPITECH PROJECT, 2019
** sqd
** File description:
** qsdd
*/

#include "./../../include/rpg.h"

rpg_t   *fight_management(rpg_t *rpg, sfEvent *event)
{
    int stop = 0;
    int i = 0;

    while (rpg->int_fight->move_button[i] != NULL && stop == 0) {
        if (event->key.code == rpg->int_fight->move_button[i]->id) {
            rpg = rpg->int_fight->move_button[i]->movement(rpg);
            stop = 1;
        }
        i = i + 1;
    }
    if (rpg->int_fight->pers->sat_player->hp >
        rpg->int_fight->pers->sat_player->hp_max)
        rpg->int_fight->pers->sat_player->hp =
            rpg->int_fight->pers->sat_player->hp_max;
    return (rpg);
}

rpg_t *do_att_play(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers)
{
    if (rpg->int_fight->pers->sat_player->step == FINISH
        || rpg->int_fight->pers->sat_enm->step == FINISH) {
        rpg->int_fight->step = 1;
        rpg->int_fight->pers->sat_player->step = NONEATT;
        rpg->int_fight->pers->sat_enm->step = NONEATT;
        rpg->int_fight->button->button_stat->part.left =
            rpg->int_fight->button->button_stat->part.width;
        return (rpg);
    }
    rpg = do_heal(rpg, window);
    rpg = do_snarl(rpg, window, pers);
    rpg = do_fire(rpg, window, pers);
    rpg = do_tackl(rpg, window, pers);
    draw_button(rpg->int_fight, window);
    return (rpg);
}

rpg_t *do_att_enm(rpg_t *rpg, sfRenderWindow *window, enm_t *enm)
{
    if (rpg->int_fight->pers->sat_enm->step != FINISH) {
        enm->draw_pa(
            enm->parti,
            rpg->int_fight->pers->sat_enm,
            enm->st_text_enm);
        sfRenderWindow_drawPrimitives(
            window,
            enm->parti->ver,
            enm->parti->size * 4,
            sfQuads,
            enm->parti->state);
    } else {
        rpg->int_fight->step = 0;
        rpg->int_fight->pers->sat_enm->step = NONEATT;
        rpg->int_fight->pers->sat_player = attk_action(
            rpg->int_fight->pers->sat_enm,
            rpg->int_fight->pers->sat_player);
        rpg->int_fight->pers->sat_player->step = NONEATT;
    }
    return (rpg);
}

int end_f(rpg_t *rpg, enm_t *enm_struct)
{
    if ((enm_struct->sat_enm->hp < 0
        || rpg->int_fight->pers->sat_player->hp < 0)
        && rpg->int_fight->pers->sat_player->step == NONEATT
        && rpg->int_fight->pers->sat_enm->step == NONEATT)
        return (-1);
    return (0);
}

rpg_t *loop_fight(rpg_t *rpg, sfRenderWindow *window, int enm)
{
    sfEvent event;
    enm_t *enm_struct = init_enm(rpg, enm);

    rpg = intit_stata_player(rpg);
    while (rpg->end == 0 && sfRenderWindow_isOpen(window)
        && end_f(rpg, enm_struct) != -1) {
        draw_innterface(rpg->int_fight, window, enm_struct);
        rpg = fight_events(window, &event, rpg);
        if (rpg->int_fight->step == 0) {
            rpg = do_att_play(rpg, window, rpg->int_fight->pers->st_text_sor);
        } else
            rpg = do_att_enm(rpg, window, enm_struct);
        window_action(window);
    }
    rpg->int_fight->step = 0;
    rpg->int_fight->button->button_stat->part.left =
        rpg->int_fight->button->button_stat->part.width;
    free(enm_struct);
    return (rpg);
}
