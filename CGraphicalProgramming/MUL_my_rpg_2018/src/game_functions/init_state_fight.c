/*
** EPITECH PROJECT, 2019
** sd
** File description:
** qsd
*/

#include "./../../include/rpg.h"

rpg_t *intit_stata_player(rpg_t *rpg)
{
    rpg->int_fight->pers->sat_player->def = rpg->player->defense;
    rpg->int_fight->pers->sat_player->dmg = rpg->player->dmg;
    rpg->int_fight->pers->sat_player->hp = rpg->player->hp;
    rpg->int_fight->pers->sat_player->hp_max = rpg->player->hp_max;
    rpg->int_fight->pers->sat_player->lvl = rpg->player->lvl;
    rpg->int_fight->pers->sat_player->step = NONEATT;
    return (rpg);
}

enm_t *init_enm_bl(rpg_t *rpg, enm_t *enm)
{
    enm->sat_enm = rpg->int_fight->pers->sat_enm;
    enm->sat_enm->def = 1;
    enm->sat_enm->dmg = 1;
    enm->sat_enm->hp = 12;
    enm->sat_enm->hp_max = 12;
    enm->sat_enm->lvl = 1;
    enm->sat_enm->step = NONEATT;
    enm->enm = rpg->int_fight->pers->blobe;
    enm->st_text_enm = rpg->int_fight->pers->st_text_bl;
    enm->draw_pa = &draw_bl;
    enm->parti = rpg->int_fight->blob_part;
    return (enm);
}

enm_t *init_enm_sn(rpg_t *rpg, enm_t *enm)
{
    enm->sat_enm = rpg->int_fight->pers->sat_enm;
    enm->sat_enm->def = 10;
    enm->sat_enm->dmg = 5;
    enm->sat_enm->hp = 23;
    enm->sat_enm->hp_max = 23;
    enm->sat_enm->lvl = 1;
    enm->sat_enm->step = NONEATT;
    enm->enm = rpg->int_fight->pers->snak;
    enm->st_text_enm = rpg->int_fight->pers->st_text_snak;
    enm->draw_pa = &draw_sn;
    enm->parti = rpg->int_fight->snak_part;
    return (enm);

}

enm_t *init_enm(rpg_t *rpg, int enm)
{
    enm_t *enm_struct = malloc(sizeof(enm_t));

    if (enm == BLOBE)
        enm_struct = init_enm_bl(rpg, enm_struct);
    if (enm == SNAKE)
        enm_struct = init_enm_sn(rpg, enm_struct);
    if (enm == SORCER)
        enm_struct = init_sor_bl(rpg, enm_struct);
    if (enm == SORCERT)
        enm_struct = init_sor_cheat(rpg, enm_struct);
    return (enm_struct);
}
