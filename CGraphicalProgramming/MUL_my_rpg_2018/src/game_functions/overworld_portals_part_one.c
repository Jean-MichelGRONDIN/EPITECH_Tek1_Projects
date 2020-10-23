/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** part one of overworld portals
*/

#include "./../../include/rpg.h"

portal_t    *init_first_house(portal_t *list)
{
    list = add_this_portal(list, "2352;2224;16;16;376;384");
    list = add_this_portal(list, "376;400;16;16;2352;2240");
    return (list);
}

portal_t    *init_forest_tunnel(portal_t *list)
{
    list = add_this_portal(list, "1552;2096;16;16;1616;2304");
    list = add_this_portal(list, "1616;2288;16;16;1568;2096");
    return (list);
}

portal_t    *init_last_house_cave(portal_t *list)
{
    list = add_this_portal(list, "1184;1680;16;16;1816;432");
    list = add_this_portal(list, "1840;320;16;16;2712;464");
    list = add_this_portal(list, "2712;240;16;16;1192;1696");
    list = add_this_portal(list, "1800;272;16;16;2264;432");
    list = add_this_portal(list, "2336;272;16;16;1296;1488");
    list = add_this_portal(list, "1296;1504;16;16;1184;1728");
    return (list);
}

portal_t    *init_last_house(portal_t *list)
{
    list = add_this_portal(list, "1264;1552;16;16;856;384");
    list = add_this_portal(list, "856;400;16;16;1264;1568");
    return (list);
}

portal_t    *init_town_yellow_house(portal_t *list)
{
    list = add_this_portal(list, "688;2176;16;16;1320;400");
    list = add_this_portal(list, "1320;416;16;16;688;2192");
    return (list);
}