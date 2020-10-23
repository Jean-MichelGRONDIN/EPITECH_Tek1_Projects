/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** return 1 if collision detectde between the 2 object gives as parameters
*/

#include "./../include/defender.h"

int collision_detector(list_t *one, list_t *two)
{
    one->obj->rect = sfSprite_getGlobalBounds(one->obj->sprite);
    two->obj->rect = sfSprite_getGlobalBounds(two->obj->sprite);

    if (sfFloatRect_intersects(&one->obj->rect, &two->obj->rect, NULL))
        return (1);
    return (0);
}
