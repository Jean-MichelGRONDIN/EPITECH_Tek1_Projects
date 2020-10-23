/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** set_assets
*/

#include "./../../include/rpg.h"

char *text_first_pnj(void);

void put_in_list(entity_t *elem, entity_list **list);

entity_list *get_all_chest(void);

sfText *set_text(char *str);

entity_list *get_pnj(entity_list *entities);

char *text_set_pnj(char *str1, char *str2, char *str3, char *str4);

texture_t   *init_texture_struc(char *path);

sfText *set_text_pnj(char *str)
{
    sfText *text;
    sfFont *font;

    text = sfText_create();
    font = sfFont_createFromFile("./assets/PTS76F.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setColor(text, sfWhite);
    sfText_setScale(text, (sfVector2f){0.2, 0.2});
    return (text);
}

entity_t *set_entity(float x, float y, char *str, char *file)
{
    entity_t *entity = malloc(sizeof(*entity));

    entity->rect_e = init_int_rect(0, 16, 0, 16);
    entity->pos = init_vector_two_f(x, y);
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

entity_list *get_all_pnj(void)
{
    entity_list *entities = NULL;

    put_in_list(set_entity(400, 340, text_first_pnj()
        , "./assets/princess.png"), &entities);
    put_in_list(set_entity(2313, 2225, "Hi guy, what s up ?"
        , "./assets/heroes30.png"), &entities);
    put_in_list(set_entity(2044, 2053,
        text_set_pnj("Oh you re here,\nthe mayor of the city",
        " wants to meet you.\nFollow ",
        "the West road to go to the city.",
        NULL),
        "./assets/heroes13.png"), &entities);
    put_in_list(set_entity(988, 1932, "Hello !\n How can I help you ?"
        , "./assets/heroes12.png"), &entities);
    entities = get_pnj(entities);
    return (entities);
}

entities_t *init_entities(void)
{
    entities_t *entities = malloc(sizeof(*entities));

    entities->pnjs = get_all_pnj();
    entities->mobs = get_all_mob();
    entities->chest = get_all_chest();
    entities->rect_font = init_texture_struc("./assets/Textbox.png");
    entities->text = set_text("Press   E   to  interact  !!");
    return (entities);
}
