/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** return 1 if collision detectde between the 2 object gives as parameters
*/

#include "./../../include/rpg.h"

int detect_collision_up(player_t *player, entity_t *pnj);

int detect_collision_down(player_t *player, entity_t *pnj);

int detect_collision_left(player_t *player, entity_t *pnj);

int detect_collision_right(player_t *player, entity_t *pnj);

int collision_detector_up(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_up(player, pnj->obj) == 1)
            return (1);
        pnj = pnj->next;
    }
    return (0);
}

int collision_detector_down(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_down(player, pnj->obj) == 1)
            return (1);
        pnj = pnj->next;
    }
    return (0);
}

int collision_detector_left(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_left(player, pnj->obj) == 1)
            return (1);
        pnj = pnj->next;
    }
    return (0);
}

int collision_detector_right(player_t *player, entity_list *pnj_list)
{
    entity_list *pnj = pnj_list;

    while (pnj != NULL) {
        if (detect_collision_right(player, pnj->obj) == 1)
            return (1);
        pnj = pnj->next;
    }
    return (0);
}

int all_collision(player_t *player, entity_list *pnj_list)
{
    if (collision_detector_up(player, pnj_list) == 1)
        return (1);
    if (collision_detector_down(player, pnj_list) == 1)
        return (1);
    if (collision_detector_right(player, pnj_list) == 1)
        return (1);
    if (collision_detector_left(player, pnj_list) == 1)
        return (1);
    return (0);
}
