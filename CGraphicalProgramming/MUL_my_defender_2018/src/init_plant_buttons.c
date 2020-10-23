/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init plant button for game
*/

#include "./../include/defender.h"

obj_t   *init_frozenplant_button(void)
{
    obj_t   *bp =  malloc(sizeof(obj_t));

    bp->type = TOOLBAR;
    bp->state = FROZEN_TOWER;
    bp->speed = 100;
    bp->max = 200;
    bp->price = get_price(bp->state);
    bp->sprite = sfSprite_create();
    bp->texture = sfTexture_createFromFile("./assets/buttonfrozen.png", NULL);
    sfSprite_setTexture(bp->sprite, bp->texture, sfTrue);
    bp->pos.x = 80;
    bp->pos.y = 250;
    bp->part.top = 0;
    bp->part.left = 0;
    bp->part.width = 100;
    bp->part.height = 97;
    sfSprite_setTextureRect(bp->sprite, bp->part);
    sfSprite_setPosition(bp->sprite, bp->pos);
    bp->anim = NULL;
    bp->rect = sfSprite_getGlobalBounds(bp->sprite);
    return (bp);
}

obj_t   *init_sunplant_button(void)
{
    obj_t   *bp =  malloc(sizeof(obj_t));

    bp->type = TOOLBAR;
    bp->state = GENERATOR;
    bp->speed = 100;
    bp->max = 200;
    bp->price = get_price(bp->state);
    bp->sprite = sfSprite_create();
    bp->texture = sfTexture_createFromFile("./assets/buttonsun.png", NULL);
    sfSprite_setTexture(bp->sprite, bp->texture, sfTrue);
    bp->pos.x = 80;
    bp->pos.y = 400;
    bp->part.top = 0;
    bp->part.left = 0;
    bp->part.width = 100;
    bp->part.height = 97;
    sfSprite_setTextureRect(bp->sprite, bp->part);
    sfSprite_setPosition(bp->sprite, bp->pos);
    bp->anim = NULL;
    bp->rect = sfSprite_getGlobalBounds(bp->sprite);
    return (bp);
}

obj_t   *init_murplant_button(void)
{
    obj_t   *bp =  malloc(sizeof(obj_t));

    bp->type = TOOLBAR;
    bp->state = WALL;
    bp->speed = 100;
    bp->max = 200;
    bp->price = get_price(bp->state);
    bp->sprite = sfSprite_create();
    bp->texture = sfTexture_createFromFile("./assets/buttonmur.png", NULL);
    sfSprite_setTexture(bp->sprite, bp->texture, sfTrue);
    bp->pos.x = 250;
    bp->pos.y = 400;
    bp->part.top = 0;
    bp->part.left = 0;
    bp->part.width = 100;
    bp->part.height = 97;
    sfSprite_setTextureRect(bp->sprite, bp->part);
    sfSprite_setPosition(bp->sprite, bp->pos);
    bp->anim = NULL;
    bp->rect = sfSprite_getGlobalBounds(bp->sprite);
    return (bp);
}

obj_t   *init_plantplant_button(void)
{
    obj_t   *bp =  malloc(sizeof(obj_t));

    bp->type = TOOLBAR;
    bp->state = BASIC_TOWER;
    bp->speed = 100;
    bp->max = 200;
    bp->price = get_price(bp->state);
    bp->sprite = sfSprite_create();
    bp->texture = sfTexture_createFromFile("./assets/buttonplant.png", NULL);
    sfSprite_setTexture(bp->sprite, bp->texture, sfTrue);
    bp->pos.x = 250;
    bp->pos.y = 250;
    bp->part.top = 0;
    bp->part.left = 0;
    bp->part.width = 100;
    bp->part.height = 97;
    sfSprite_setTextureRect(bp->sprite, bp->part);
    sfSprite_setPosition(bp->sprite, bp->pos);
    bp->anim = NULL;
    bp->rect = sfSprite_getGlobalBounds(bp->sprite);
    return (bp);
}

list_t  *init_plant_buttons(list_t  *list)
{
    list = add_obj_to_list(init_frozenplant_button(), list);
    list = add_obj_to_list(init_sunplant_button(), list);
    list = add_obj_to_list(init_murplant_button(), list);
    list = add_obj_to_list(init_plantplant_button(), list);
    list = add_obj_to_list(init_help_button(), list);
    return (list);
}