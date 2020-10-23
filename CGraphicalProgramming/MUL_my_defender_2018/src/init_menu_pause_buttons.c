/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init pause menu buttons
*/

#include "./../include/defender.h"

obj_t   *init_pause_play_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 200;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/play_pause.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 350;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 200;
    bs->part.height = 49;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   *init_pause_exit_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 200;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/exit_pause.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 450;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 200;
    bs->part.height = 49;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   *init_pause_menu_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 200;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/menu_pause.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 400;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 200;
    bs->part.height = 49;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   **init_pause_menu_buttons(void)
{
    obj_t   **bs = malloc(sizeof(obj_t *) * 4);

    bs[0] = init_pause_play_button();
    bs[1] = init_pause_exit_button();
    bs[2] = init_pause_menu_button();
    bs[3] = NULL;
    return (bs);
}