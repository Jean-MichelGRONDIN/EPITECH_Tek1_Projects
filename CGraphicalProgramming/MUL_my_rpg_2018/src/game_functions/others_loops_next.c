/*
** EPITECH PROJECT, 2019
** sqdd
** File description:
** sqd
*/

#include "./../../include/rpg.h"

rpg_t *lunch_fight(rpg_t *rpg, int enm, sfRenderWindow *window)
{
    sfMusic_stop(rpg->musics[0]);
    sfMusic_play(rpg->musics[5]);
    rpg = set_mob_positions(rpg, window);
    rpg = loop_fight(rpg, window, enm);
    rpg = reset_pos_after_inventory(rpg, window);
    rpg = manage_end(rpg);
    rpg->step = 0;
    sfMusic_stop(rpg->musics[5]);
    sfMusic_play(rpg->musics[0]);
    return (rpg);
}