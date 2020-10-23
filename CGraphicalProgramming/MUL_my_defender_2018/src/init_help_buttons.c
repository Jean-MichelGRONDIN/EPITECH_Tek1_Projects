/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init help button
*/

#include "./../include/defender.h"

obj_t   *init_help_button(void)
{
    obj_t   *bp =  malloc(sizeof(obj_t));

    bp->type = TOOLBAR;
    bp->state = HELP;
    bp->speed = 100;
    bp->max = 200;
    bp->sprite = sfSprite_create();
    bp->texture = sfTexture_createFromFile("./assets/buttonhelp.png", NULL);
    sfSprite_setTexture(bp->sprite, bp->texture, sfTrue);
    bp->pos.x = 160;
    bp->pos.y = 550;
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