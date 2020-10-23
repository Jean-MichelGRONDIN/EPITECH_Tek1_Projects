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

entity_t *collision_detector_up_pnj(player_t *player, entity_list *pnj_list);

entity_t *collision_detector_down_pnj(player_t *player, entity_list *pnj_list);

entity_t *collision_detector_left_pnj(player_t *player, entity_list *pnj_list);

entity_t *collision_detector_right_pnj(player_t *player, entity_list *pnj_list);

entity_t *found_right_chest(rpg_t *rpg)
{
    entity_t *right = NULL;

    if ((right = collision_detector_up_pnj(rpg->player, rpg->entities->chest))
        != NULL)
        return (right);
    if ((right = collision_detector_down_pnj(rpg->player, rpg->entities->chest))
        != NULL)
        return (right);
    if ((right = collision_detector_right_pnj(
        rpg->player, rpg->entities->chest))
        != NULL)
        return (right);
    if ((right = collision_detector_left_pnj(rpg->player, rpg->entities->chest))
        != NULL)
        return (right);
    return (NULL);
}

inventory_t *manage_items_chest(
    entity_list **list, inventory_t *inventory, entity_t *right)
{
    entity_list *new = *list;

    while (new != NULL && new->obj != right)
        new = new->next;
    if (new == NULL || new->item == NULL)
        return (inventory);
    inventory->stock = add_item_to_this_inv(inventory->stock, new->item);
    new->item = NULL;
    return (inventory);
}
