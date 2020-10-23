/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** free the obj struct passed in params
*/

#include "./../include/defender.h"

obj_t   *free_this_obj(obj_t *obj)
{
    sfSprite_destroy(obj->sprite);
    sfTexture_destroy(obj->texture);
    free(obj);
    obj = NULL;
    return (obj);
}
