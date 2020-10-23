/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init the protals linked list of overworld
*/

#include "./../include/rpg.h"

portal_t    *init_overworld_portals(void)
{
    portal_t    *list = NULL;

    list = init_first_house(list);
    list = init_forest_tunnel(list);
    list = init_last_house_cave(list);
    list = init_last_house(list);
    list = init_town_yellow_house(list);
    list = init_fisher_house(list);
    list = init_far_house_in_starting_village(list);
    list = init_witch_house(list);
    return (list);
}