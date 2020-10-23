/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** qsd
*/

#include "./../../include/rpg.h"

life_t *init_life(void)
{
    life_t *new = malloc(sizeof(*new));

    new->health_player = init_texture_struc("./assets/health_bar.png");
    new->health_enm = init_texture_struc("./assets/health_bar.png");
    new->health_enm_stat = init_texture_stat(
        struct_intrect(0, 0, 297, 71), struct_vector2f(1600, 0));
    new->health_player_stat = init_texture_stat(
        struct_intrect(0, 0, 297, 71), struct_vector2f(0, 0));
    new->life_player = init_texture_struc("./assets/life.png");
    new->life_enm = init_texture_struc("./assets/life.png");
    new->sat_life_player = init_texture_stat(
        struct_intrect(0, 0, 196, 31), struct_vector2f(74, 19));
    new->stat_life_enm = init_texture_stat(
        struct_intrect(0, 0, 196, 31), struct_vector2f(1674, 19));
    return (new);
}

void set_stat_text_pers(pers_t *new)
{
    sfSprite_setPosition(
        new->player->sprite, new->st_text_p->pos);
    sfSprite_setTextureRect(
        new->player->sprite, new->st_text_p->part);
    sfSprite_setPosition(
        new->snak->sprite, new->st_text_snak->pos);
    sfSprite_setTextureRect(
        new->snak->sprite, new->st_text_snak->part);
    sfSprite_setPosition(
        new->blobe->sprite, new->st_text_bl->pos);
    sfSprite_setTextureRect(
        new->blobe->sprite, new->st_text_bl->part);
    sfSprite_setPosition(
        new->sorcer->sprite, new->st_text_sor->pos);
    sfSprite_setTextureRect(
        new->sorcer->sprite, new->st_text_sor->part);
}

pers_t *init_pers(void)
{
    pers_t *new = malloc(sizeof(*new));

    new->player = init_texture_struc("./assets/feh-jaffar.png");
    new->st_text_p = init_texture_stat(
        struct_intrect(0, 0, 389, 486), struct_vector2f(420, 320));
    new->blobe = init_texture_struc("./assets/blob.png");
    new->st_text_bl = init_texture_stat(
        struct_intrect(0, 0, 563, 352), struct_vector2f(1220, 520));
    new->snak = init_texture_struc("./assets/serpent.png");
    new->st_text_snak = init_texture_stat(
        struct_intrect(0, 0, 350, 495), struct_vector2f(1220, 320));
    new->sorcer = init_texture_struc("./assets/sorcer.png");
    new->st_text_sor = init_texture_stat(
        struct_intrect(0, 0, 424, 564), struct_vector2f(1220, 290));
    set_stat_text_pers(new);
    return (new);
}