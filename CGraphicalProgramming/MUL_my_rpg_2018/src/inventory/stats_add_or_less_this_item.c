/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** stats_less_this_item
*/

#include "rpg.h"

rpg_t   *stats_add_this_item(rpg_t *rpg)
{
    int type = 0;
    int how = 0;

    if (rpg->inventory->m_item == NULL)
        return (rpg);
    type = rpg->inventory->m_item->item_type;
    how = rpg->inventory->m_item->item_value;
    rpg->player = update_stats_with_this(rpg->player,
        rpg->list->p_stats_list, type, how);
    return (rpg);
}

rpg_t   *stats_less_this_item(rpg_t *rpg)
{
    int type = 0;
    int how = 0;

    if (rpg->inventory->m_item == NULL)
        return (rpg);
    type = rpg->inventory->m_item->item_type;
    how = rpg->inventory->m_item->item_value * -1;
    rpg->player = update_stats_with_this(rpg->player,
        rpg->list->p_stats_list, type, how);
    return (rpg);
}