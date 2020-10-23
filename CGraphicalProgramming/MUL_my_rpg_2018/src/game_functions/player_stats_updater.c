/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** player_stat_updader
*/

#include "rpg.h"

player_t    *update_armor(player_t *p, int how)
{
    p->defense = p->defense + how;
    return (p);
}

player_t    *update_hp(player_t *p, int how)
{
    p->hp_max = p->hp_max + how;
    return (p);
}

player_t    *update_strengh(player_t *p, int how)
{
    p->dmg = p->dmg + how;
    return (p);
}

player_t    *update_speed(player_t *p, int how)
{
    p->speed = p->speed + how;
    return (p);
}