/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** qsd
*/

#include "./../../include/rpg.h"

enm_t *init_sor_bl(rpg_t *rpg, enm_t *enm)
{
    enm->sat_enm = rpg->int_fight->pers->sat_enm;
    enm->sat_enm->def = 20;
    enm->sat_enm->dmg = 10;
    enm->sat_enm->hp = 34;
    enm->sat_enm->hp_max = 34;
    enm->sat_enm->lvl = 1;
    enm->sat_enm->step = NONEATT;
    enm->enm = rpg->int_fight->pers->sorcer;
    enm->st_text_enm = rpg->int_fight->pers->st_text_sor;
    enm->draw_pa = &draw_bl;
    enm->parti = rpg->int_fight->sor_part;
    return (enm);
}

enm_t *init_sor_cheat(rpg_t *rpg, enm_t *enm)
{
    enm->sat_enm = rpg->int_fight->pers->sat_enm;
    enm->sat_enm->def = 10;
    enm->sat_enm->dmg = 1000;
    enm->sat_enm->hp = 100000;
    enm->sat_enm->hp_max = 100000;
    enm->sat_enm->lvl = 1;
    enm->sat_enm->step = NONEATT;
    enm->enm = rpg->int_fight->pers->sorcer;
    enm->st_text_enm = rpg->int_fight->pers->st_text_sor;
    enm->draw_pa = &draw_sn;
    enm->parti = rpg->int_fight->sor_bis_part;
    return (enm);

}