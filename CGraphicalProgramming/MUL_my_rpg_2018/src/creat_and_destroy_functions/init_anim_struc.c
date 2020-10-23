/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init animation struc with sended where, what, and when
*/

#include "./../../include/rpg.h"

animation_t *init_anim_struc(sfVector2f where,
    sfIntRect what_part, float when, float mv_dl)
{
    animation_t *new = malloc(sizeof(*new));

    new->pos.x = where.x;
    new->pos.y = where.y;
    new->part.height = what_part.height;
    new->part.left = what_part.left;
    new->part.top = what_part.top;
    new->part.width = what_part.width;
    new->anim_delay = when;
    if (when != -1)
        new->anim_clock = init_this_clock();
    else
        new->anim_clock = NULL;
    new->move_delay = mv_dl;
    if (mv_dl != -1)
        new->move_clock = init_this_clock();
    else
        new->move_clock = NULL;
    return (new);
}