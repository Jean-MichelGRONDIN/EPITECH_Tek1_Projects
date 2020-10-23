/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** display_money
*/

#include "./../include/defender.h"

obj_t   *init_sun_money(void)
{
    obj_t   *bp =  malloc(sizeof(obj_t));

    bp->type = MONEY;
    bp->state = ALIVE;
    bp->sprite = sfSprite_create();
    bp->texture = sfTexture_createFromFile("./assets/sun.png", NULL);
    sfSprite_setTexture(bp->sprite, bp->texture, sfTrue);
    bp->pos.x = 120;
    bp->pos.y = 20;
    bp->anim = NULL;
    sfSprite_setPosition(bp->sprite, bp->pos);
    return (bp);
}