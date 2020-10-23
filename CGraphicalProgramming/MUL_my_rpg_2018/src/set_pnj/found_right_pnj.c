/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** found right pnj
*/

#include "./../../include/rpg.h"

int detect_collision_up(player_t *player, entity_t *pnj);

int detect_collision_down(player_t *player, entity_t *pnj);

int detect_collision_left(player_t *player, entity_t *pnj);

int detect_collision_right(player_t *player, entity_t *pnj);

entity_t *collision_detector_up_pnj(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_up(player, pnj->obj) == 1)
            return (pnj->obj);
        pnj = pnj->next;
    }
    return (NULL);
}

entity_t *collision_detector_down_pnj(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_down(player, pnj->obj) == 1)
            return (pnj->obj);
        pnj = pnj->next;
    }
    return (NULL);
}

entity_t *collision_detector_left_pnj(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_left(player, pnj->obj) == 1)
            return (pnj->obj);
        pnj = pnj->next;
    }
    return (NULL);
}

entity_t *collision_detector_right_pnj(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_right(player, pnj->obj) == 1)
            return (pnj->obj);
        pnj = pnj->next;
    }
    return (NULL);
}

entity_t *found_right_pnj(rpg_t *rpg)
{
    entity_t *right = NULL;

    if ((right = collision_detector_up_pnj(rpg->player, rpg->entities->pnjs))
        != NULL)
        return (right);
    if ((right = collision_detector_down_pnj(rpg->player, rpg->entities->pnjs))
        != NULL)
        return (right);
    if ((right = collision_detector_right_pnj(rpg->player, rpg->entities->pnjs))
        != NULL)
        return (right);
    if ((right = collision_detector_left_pnj(rpg->player, rpg->entities->pnjs))
        != NULL)
        return (right);
    return (NULL);
}