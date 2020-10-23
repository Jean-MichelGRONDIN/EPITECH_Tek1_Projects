/*
** EPITECH PROJECT, 2019
** dsq
** File description:
** qsd
*/

#include "./../../include/rpg.h"

void put_in_list(entity_t *elem, entity_list **list);

entity_t *set_entity_mob(sfVector2f pos, float ori, char *str, char *file)
{
    entity_t *entity = malloc(sizeof(*entity));

    entity->rect_e = init_int_rect(0, 16, ori, 16);
    entity->pos = pos;
    entity->entity_draw = init_texture_struc(file);
    entity->entity_anim = init_anim_struc(entity->pos, entity->rect_e,
        0.03, 0.2);
    sfSprite_setTextureRect(entity->entity_draw->sprite,
        entity->entity_anim->part);
    sfSprite_setPosition(entity->entity_draw->sprite,
        entity->entity_anim->pos);
    entity->ptext = set_text_pnj(str);
    return (entity);
}

void put_blob(entity_list **entities)
{
    put_in_list(set_entity_mob(struct_vector2f(1504, 1920), 0, "blobe"
        , "./assets/blobsprit.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(1760, 2000), 0, "blobe"
        , "./assets/blobsprit.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(1744, 2096), 0, "blobe"
        , "./assets/blobsprit.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(1136, 1894), 0, "blobe"
        , "./assets/blobsprit.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(944, 1888), 0, "blobe"
        , "./assets/blobsprit.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(1536, 1936), 0, "blobe"
        , "./assets/blobsprit.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(1184, 1696), 0, "sorcer2"
        , "./assets/sorciere.png"), entities);
    put_in_list(set_entity_mob(struct_vector2f(1168, 848), 0, "sorcer"
        , "./assets/sorciere.png"), entities);
}

entity_list *get_all_mob(void)
{
    entity_list *entities = NULL;

    put_in_list(set_entity_mob(struct_vector2f(2368, 1504), 0, "snake"
        , "./assets/serpentrename.png"), &entities);
    put_in_list(set_entity_mob(struct_vector2f(2352, 1600), 0, "snake"
        , "./assets/serpentrename.png"), &entities);
    put_in_list(set_entity_mob(struct_vector2f(2480, 1504), 0, "snake"
        , "./assets/serpentrename.png"), &entities);
    put_in_list(set_entity_mob(struct_vector2f(2560, 1440), 0, "snake"
        , "./assets/serpentrename.png"), &entities);
    put_in_list(set_entity_mob(struct_vector2f(2560, 1616), 0, "snake"
        , "./assets/serpentrename.png"), &entities);
    put_in_list(set_entity_mob(struct_vector2f(2576, 1680), 0, "snake"
        , "./assets/serpentrename.png"), &entities);
    put_blob(&entities);
    return (entities);
}