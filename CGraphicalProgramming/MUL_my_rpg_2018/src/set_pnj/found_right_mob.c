/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** sdq
*/

#include "./../../include/rpg.h"

entity_t *found_right_mob(rpg_t *rpg)
{
    entity_t *right = NULL;

    if ((right = collision_detector_up_pnj(rpg->player, rpg->entities->mobs))
        != NULL)
        return (right);
    if ((right = collision_detector_down_pnj(rpg->player, rpg->entities->mobs))
        != NULL)
        return (right);
    if ((right = collision_detector_right_pnj(rpg->player, rpg->entities->mobs))
        != NULL)
        return (right);
    if ((right = collision_detector_left_pnj(rpg->player, rpg->entities->mobs))
        != NULL)
        return (right);
    return (NULL);
}

