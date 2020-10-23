/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** set_assets_two
*/

#include "./../../include/rpg.h"

items_t *init_item_armor_chest(int value);

items_t *init_item_boots_chest(int value);

items_t *init_item_sword_chest(int value);

items_t *init_item_hearth_chest(int value);

items_t *init_item_axes_chest(int value);

entity_t *set_entity(float x, float y, char *str, char *file);

void set_items_chests(entity_t *elem, items_t *items, entity_list **list)
{
    entity_list *new = malloc(sizeof(entity_list));
    entity_list *index = *list;

    new->obj = elem;
    new->item = items;
    new->next = NULL;
    if (*list == NULL) {
        *list = new;
        return;
    }
    while (index->next != NULL)
        index = index->next;
    index->next = new;
}

void get_other_chest(entity_list *entities)
{
    set_items_chests(set_entity(1168, 816, NULL
        , "./assets/coffre.png"),
        init_item_axes_chest(10000000),
        &entities);
}

entity_list *get_all_chest(void)
{
    entity_list *entities = NULL;

    set_items_chests(set_entity(2110, 2328, NULL
        , "./assets/coffre.png"),
        init_item_armor_chest(10),
        &entities);
    set_items_chests(set_entity(493, 1646, NULL
        , "./assets/coffre.png"),
        init_item_boots_chest(10),
        &entities);
    set_items_chests(set_entity(1131, 1404, NULL
        , "./assets/coffre.png"),
        init_item_sword_chest(7),
        &entities);
    set_items_chests(set_entity(2512, 1531, NULL
        , "./assets/coffre.png"),
        init_item_hearth_chest(15),
        &entities);
    get_other_chest(entities);
    return (entities);
}
