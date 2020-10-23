/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** entities_management
*/

#include "./../../include/rpg.h"

rpg_t   *chest_management(rpg_t *rpg, sfRenderWindow *window)
{
    entity_list *entity = rpg->entities->chest;

    while (entity != NULL) {
        sfRenderWindow_drawSprite(window,
        entity->obj->entity_draw->sprite, NULL);
        entity = entity->next;
    }
    return (rpg);
}

rpg_t   *pnj_management(rpg_t *rpg, sfRenderWindow *window)
{
    entity_list *entity = rpg->entities->pnjs;

    while (entity != NULL) {
        sfRenderWindow_drawSprite(window,
        entity->obj->entity_draw->sprite, NULL);
        entity = entity->next;
    }
    rpg = chest_management(rpg, window);
    return (rpg);
}

rpg_t   *mob_management(rpg_t *rpg, sfRenderWindow *window)
{
    entity_list *entity = rpg->entities->mobs;

    while (entity != NULL) {
        sfRenderWindow_drawSprite(window,
        entity->obj->entity_draw->sprite, NULL);
        entity = entity->next;
    }
    return (rpg);
}
