/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** others_loops
*/

#include "rpg.h"

rpg_t   *tack_off_mobs(rpg_t *rpg)
{
    entity_t *mob = found_right_mob(rpg);
    entity_list *save = rpg->entities->mobs;
    entity_list *before = rpg->entities->mobs;

    while (rpg->entities->mobs != NULL && rpg->entities->mobs->obj != mob) {
        before = rpg->entities->mobs;
        rpg->entities->mobs = rpg->entities->mobs->next;
    }
    if (!rpg->entities->mobs) {
        rpg->entities->mobs = save;
        return (rpg);
    }
    if (rpg->entities->mobs == save)
        save = save->next;
    before->next = rpg->entities->mobs->next;
    rpg->entities->mobs = save;
    return (rpg);
}

rpg_t * reset_stat(rpg_t *rpg)
{
    rpg->player->hp = rpg->int_fight->pers->sat_player->hp;
    rpg->player->defense = rpg->int_fight->pers->sat_player->def;
    return (rpg);
}

rpg_t *inc_quest(rpg_t *rpg)
{
    if (rpg->step == SNAKE)
        rpg->player->snake += 1;
    if (rpg->step == BLOBE)
        rpg->player->blobe += 1;
    if (rpg->step == SORCER)
        rpg->player->sor += 1;
    return (rpg);
}

rpg_t *manage_end(rpg_t *rpg)
{
    rpg = reset_stat(rpg);
    if (rpg->player->hp > 0) {
        rpg = inc_quest(rpg);
        rpg = tack_off_mobs(rpg);
        rpg->player->lvl += 1;
        rpg->player->dmg += 1;
        rpg->player->hp_max += 2;
    } else {
        rpg->player->hp = rpg->player->hp_max;
        rpg->player->player_anim->pos = struct_vector2f(433, 335);
        sfSprite_setPosition(
            rpg->player->player_texture->sprite, struct_vector2f(433, 335));
    }
    return (rpg);
}

rpg_t   *others_loops(rpg_t *rpg, sfRenderWindow *window)
{
    if (rpg->inventory->status == YES)
        rpg = inventory_loop(rpg, window);
    if (rpg->step == SNAKE) {
        lunch_fight(rpg, rpg->step, window);
    }
    if (rpg->step == BLOBE) {
        lunch_fight(rpg, rpg->step, window);
    }
    if (rpg->step == SORCER) {
        lunch_fight(rpg, rpg->step, window);
    }
    if (rpg->step == SORCERT) {
        lunch_fight(rpg, rpg->step, window);
    }
    if (rpg->in_menu->status == YES) {
        rpg = in_game_menu_loop(rpg, window);
        rpg->in_menu->status = NO;
    }
    return (rpg);
}