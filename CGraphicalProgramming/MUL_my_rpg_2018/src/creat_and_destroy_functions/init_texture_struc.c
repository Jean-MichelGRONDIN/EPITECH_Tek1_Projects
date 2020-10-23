/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init a texture struc with the path given as parameters
*/

#include "./../../include/rpg.h"

texture_t   *init_texture_struc(char *path)
{
    texture_t   *new = malloc(sizeof(*new));

    new->sprite = sfSprite_create();
    new->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(new->sprite, new->texture, sfTrue);
    return (new);
}