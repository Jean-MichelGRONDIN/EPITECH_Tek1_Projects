/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** qsdd
*/

#include "./../../include/rpg.h"

rpg_t *do_heal(rpg_t *rpg, sfRenderWindow *window)
{
    if (rpg->int_fight->pers->sat_player->step == HEAL) {
        draw_heal(
            rpg->int_fight->heal_part,
            rpg->int_fight->pers->sat_player,
            rpg->int_fight->pers->st_text_p);
        sfRenderWindow_drawPrimitives(
            window,
            rpg->int_fight->heal_part->ver,
            rpg->int_fight->heal_part->size * 4,
            sfQuads,
            rpg->int_fight->heal_part->state);
    }
    return (rpg);
}

rpg_t *do_snarl(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers)
{
    if (rpg->int_fight->pers->sat_enm->step == SNARL) {
        draw_heal(
            rpg->int_fight->snarl_part,
            rpg->int_fight->pers->sat_enm,
            pers);
        sfRenderWindow_drawPrimitives (
            window,
            rpg->int_fight->snarl_part->ver,
            rpg->int_fight->snarl_part->size * 4,
            sfQuads,
            rpg->int_fight->snarl_part->state);
    }
    return (rpg);
}

rpg_t *do_fire(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers)
{
    if (rpg->int_fight->pers->sat_enm->step == FIRE) {
        draw_fire(
            rpg->int_fight->fire_part,
            rpg->int_fight->pers->sat_enm,
            pers);
        sfRenderWindow_drawPrimitives(
            window,
            rpg->int_fight->fire_part->ver,
            rpg->int_fight->fire_part->size * 4,
            sfQuads,
            rpg->int_fight->fire_part->state);
    }
    return (rpg);
}

rpg_t *do_tackl(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers)
{
    if (rpg->int_fight->pers->sat_enm->step == TAKL) {
        draw_elec(
            rpg->int_fight->elec_part,
            rpg->int_fight->pers->sat_enm,
            pers);
        sfRenderWindow_drawPrimitives(
            window,
            rpg->int_fight->elec_part->ver,
            rpg->int_fight->elec_part->size * 4,
            sfQuads,
            rpg->int_fight->elec_part->state);
    }
    return (rpg);
}