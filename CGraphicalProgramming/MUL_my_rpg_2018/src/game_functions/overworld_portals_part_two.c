/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** overworld_portals_part_two
*/

#include "rpg.h"

portal_t    *init_fisher_house(portal_t *list)
{
    list = add_this_portal(list, "1488;1568;16;16;792;880");
    list = add_this_portal(list, "792;896;16;16;1488;1584");
    list = add_this_portal(list, "1488;1536;16;16;840;816");
    list = add_this_portal(list, "840;800;16;16;1488;1520");
    return (list);
}

portal_t    *init_far_house_in_starting_village(portal_t *list)
{
    list = add_this_portal(list, "2112;1856;16;16;440;896");
    list = add_this_portal(list, "440;912;16;16;2112;1872");
    return (list);
}

portal_t    *init_witch_house(portal_t *list)
{
    list = add_this_portal(list, "2032;1200;16;16;1176;896");
    list = add_this_portal(list, "1176;912;16;16;2032;1216");
    return (list);
}
