/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** qsd
*/

#include "./../../include/rpg.h"

stat_pers_t *attk_action(stat_pers_t *attk, stat_pers_t *def)
{
    def->hp -= (
        (((attk->lvl * 0.4 + 2) * attk->dmg * 100)
        / ((def->def + 1) * 50)) + 2) * 1.5 * 0.5 * 1;
    def->step = TAKL;
    return def;
}

stat_pers_t *heal_action(stat_pers_t *attk, stat_pers_t *def)
{
    int nb = (
        (((attk->lvl * 0.4 + 2) * attk->dmg * 100)
        / (def->def * 50) + 2) * 1.5 * 0.5 * 1) / 2;
    attk->hp += nb;
    attk->step = HEAL;
    return attk;
}

stat_pers_t *snarl_action(stat_pers_t *attk, stat_pers_t *def)
{
    def->def -= ((def->def * 17) / 100);
    def->step = SNARL;
    attk = attk;
    return def;
}

stat_pers_t *fire_action(stat_pers_t *attk, stat_pers_t *def)
{
    def->hp -= (
        ((attk->lvl * 0.4 + 2) * attk->dmg * 100)
        / (def->def * 50) + 2) * 1.5 * 0.5 * 1.5;
    def->step = FIRE;
    return def;
}
