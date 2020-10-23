/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free the rpg structure
*/

#include "./../../include/rpg.h"

rpg_t   *free_rpg_struc(rpg_t *rpg)
{
    rpg->player = free_player(rpg->player);
    rpg->maps = free_maps(rpg->maps);
    rpg->list = free_lists(rpg->list);
    free(rpg);
    rpg = NULL;
    return (rpg);
}