/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free this texture struc
*/

#include "./../../include/rpg.h"

texture_t   *free_this_texture(texture_t *obj)
{
    sfSprite_destroy(obj->sprite);
    sfTexture_destroy(obj->texture);
    free(obj);
    obj = NULL;
    return (obj);
}