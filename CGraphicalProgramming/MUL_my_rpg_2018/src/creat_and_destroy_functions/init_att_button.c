/*
** EPITECH PROJECT, 2019
** sq
** File description:
** dddqsd
*/

#include "./../../include/rpg.h"

fight_button_t *get_att(char *asset, sfIntRect part, sfVector2f pos)
{
    fight_button_t *new = malloc(sizeof(*new));

    new->button_fight = init_texture_struc(asset);
    new->button_stat = init_texture_stat(part, pos);
    sfSprite_setPosition(new->button_fight->sprite, new->button_stat->pos);
    sfSprite_setTextureRect(new->button_fight->sprite, new->button_stat->part);
    return (new);
}