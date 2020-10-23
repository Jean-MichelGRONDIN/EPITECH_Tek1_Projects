/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init button of the menu
*/

#include "./../include/defender.h"

obj_t   *init_play_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 145;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/button_play.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 100;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 299;
    bs->part.height = 145;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   *init_exit_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 145;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/button_exit.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 550;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 299;
    bs->part.height = 145;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   *init_credits_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 145;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/button_credits.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 400;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 299;
    bs->part.height = 145;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   *init_how_to_play_button(void)
{
    obj_t   *bs =  malloc(sizeof(obj_t));

    bs->speed = 145;
    bs->sprite = sfSprite_create();
    bs->texture = sfTexture_createFromFile("./assets/button_h_t_p.png", NULL);
    sfSprite_setTexture(bs->sprite, bs->texture, sfTrue);
    bs->pos.x = 750;
    bs->pos.y = 250;
    bs->part.top = 0;
    bs->part.left = 0;
    bs->part.width = 299;
    bs->part.height = 145;
    sfSprite_setTextureRect(bs->sprite, bs->part);
    sfSprite_setPosition(bs->sprite, bs->pos);
    bs->rect = sfSprite_getGlobalBounds(bs->sprite);
    return (bs);
}

obj_t   **init_menu_buttons(void)
{
    obj_t   **bs = malloc(sizeof(obj_t *) * 5);

    bs[0] = init_play_button();
    bs[1] = init_exit_button();
    bs[2] = init_credits_button();
    bs[3] = init_how_to_play_button();
    bs[4] = NULL;
    return (bs);
}
