/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** player interaction management with portals
*/

#include "./../../include/rpg.h"

player_t    *p_tp_management(player_t *p, portal_t *list)
{
    portal_t    *tmp = list;
    sfFloatRect player;

    player.left = p->player_anim->pos.x;
    player.top = p->player_anim->pos.y;
    player.height = 16;
    player.width = 16;
    while (tmp != NULL) {
        if (sfFloatRect_intersects(&player, &tmp->from, NULL) == sfTrue) {
            p->player_anim->pos.x = tmp->to.x;
            p->player_anim->pos.y = tmp->to.y;
            p = player_set_pos(p);
            return (p);
        }
        tmp = tmp->next;
    }
    return (p);
}