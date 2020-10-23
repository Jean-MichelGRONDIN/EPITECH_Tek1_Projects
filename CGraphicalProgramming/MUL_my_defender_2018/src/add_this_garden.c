/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** add this garden to list
*/

#include "./../include/defender.h"

obj_t   *init_garden_rect(obj_t *garden, int height, int width)
{
    garden->pos.x = width;
    garden->pos.y = height;
    garden->part.top = 0;
    garden->part.left = 0;
    garden->part.width = 82;
    garden->part.height = 92;
    sfSprite_setTextureRect(garden->sprite, garden->part);
    sfSprite_setPosition(garden->sprite, garden->pos);
    return (garden);
}

list_t  *add_this_garden(list_t *list, int height, int width)
{
    char    *path = my_strdup("./assets/garden_space.png");
    obj_t   *garden = malloc(sizeof(*garden));

    garden->type = GARDEN;
    garden->state = WAITING;
    garden->sprite = sfSprite_create();
    garden->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(garden->sprite, garden->texture, sfTrue);
    garden = init_garden_rect(garden, height, width);
    garden->rect = sfSprite_getGlobalBounds(garden->sprite);
    garden->anim = NULL;
    path = free_cleanly_this_str(path);
    list = add_obj_to_list(garden, list);
    return (list);
}