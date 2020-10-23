/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_items
*/

#include "rpg.h"

items_t *init_this_item(char *name, char *path, int type)
{
    items_t *new = malloc(sizeof(*new));

    new->item_id = my_strdup(name);
    new->item_text = init_texture_struc(path);
    new->item_type = type;
    return (new);
}

items_t *init_item_armor(int value, char *name)
{
    items_t *new = NULL;

    new = init_this_item(name, "assets/armor.png", ARMOR);
    new->item_value = value;
    return (new);
}

items_t *init_item_boots(int value, char *name)
{
    items_t *new = NULL;

    new = init_this_item(name, "assets/boots.png", BOOT);
    new->item_value = value;
    return (new);
}

items_t *init_item_sword(int value, char *name)
{
    items_t *new = NULL;

    new = init_this_item(name, "assets/sword.png", SWORD);
    new->item_value = value;
    return (new);
}

items_t *init_item_hearth(int value, char *name)
{
    items_t *new = NULL;

    new = init_this_item(name, "assets/hearth.png", HEARTH);
    new->item_value = value;
    return (new);
}