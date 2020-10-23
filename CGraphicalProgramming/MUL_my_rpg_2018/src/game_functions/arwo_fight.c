/*
** EPITECH PROJECT, 2019
** dsqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"

rpg_t   *button_left(rpg_t *rpg)
{
    int size = rpg->int_fight->button->button_stat->part.width;

    if (rpg->int_fight->button->left != NULL) {
        rpg->int_fight->button->button_stat->part.left = 0;
        rpg->int_fight->button = rpg->int_fight->button->left;
        rpg->int_fight->button->button_stat->part.left = size;
    }
    return (rpg);
}

rpg_t   *button_right(rpg_t *rpg)
{
    int size = rpg->int_fight->button->button_stat->part.width;

    if (rpg->int_fight->button->right != NULL) {
        rpg->int_fight->button->button_stat->part.left = 0;
        rpg->int_fight->button = rpg->int_fight->button->right;
        rpg->int_fight->button->button_stat->part.left = size;
    }
    return (rpg);
}

rpg_t   *button_up(rpg_t *rpg)
{
    int size = rpg->int_fight->button->button_stat->part.width;

    if (rpg->int_fight->button->up != NULL) {
        rpg->int_fight->button->button_stat->part.left = 0;
        rpg->int_fight->button = rpg->int_fight->button->up;
        rpg->int_fight->button->button_stat->part.left = size;
    }
    return (rpg);
}

rpg_t   *button_down(rpg_t *rpg)
{
    int size = rpg->int_fight->button->button_stat->part.width;

    if (rpg->int_fight->button->down != NULL) {
        rpg->int_fight->button->button_stat->part.left = 0;
        rpg->int_fight->button = rpg->int_fight->button->down;
        rpg->int_fight->button->button_stat->part.left = size;
    }
    return (rpg);
}

rpg_t   *enter(rpg_t *rpg)
{
    int size = rpg->int_fight->button->button_stat->part.width;

    rpg->int_fight->button->button_stat->part.left += size;
    if (rpg->int_fight->button->action_fight == &heal_action) {
        sfMusic_play(rpg->musics[3]);
        rpg->int_fight->pers->sat_player = rpg->int_fight->button->action_fight(
            rpg->int_fight->pers->sat_player, rpg->int_fight->pers->sat_enm);
        return (rpg);
    }
    if (rpg->int_fight->button->action_fight == &snarl_action)
        sfMusic_play(rpg->musics[2]);
    if (rpg->int_fight->button->action_fight == &fire_action)
        sfMusic_play(rpg->musics[1]);
    if (rpg->int_fight->button->action_fight == &attk_action)
        sfMusic_play(rpg->musics[4]);
    rpg->int_fight->pers->sat_enm = rpg->int_fight->button->action_fight(
        rpg->int_fight->pers->sat_player, rpg->int_fight->pers->sat_enm);
    return (rpg);
}
