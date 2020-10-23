/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** init_item_chest
*/

#include "rpg.h"

items_t *init_this_item(char *name, char *path, int type);

items_t *init_item_armor_chest(int value)
{
    items_t *new = NULL;

    new = init_this_item("Golden Armor", "assets/armorg.png", ARMOR);
    new->item_value = value;
    return (new);
}

items_t *init_item_boots_chest(int value)
{
    items_t *new = NULL;

    new = init_this_item("Golden Boots", "assets/bootsg.png", BOOT);
    new->item_value = value;
    return (new);
}

items_t *init_item_sword_chest(int value)
{
    items_t *new = NULL;

    new = init_this_item("Golden Sword", "assets/swordg.png", SWORD);
    new->item_value = value;
    return (new);
}

items_t *init_item_hearth_chest(int value)
{
    items_t *new = NULL;

    new = init_this_item("Golden Hearth", "assets/hearthg.png", HEARTH);
    new->item_value = value;
    return (new);
}

items_t *init_item_axes_chest(int value)
{
    items_t *new = NULL;

    new = init_this_item("OverPowered Pickaxe", "assets/pioche.png", SWORD);
    new->item_value = value;
    return (new);
}
