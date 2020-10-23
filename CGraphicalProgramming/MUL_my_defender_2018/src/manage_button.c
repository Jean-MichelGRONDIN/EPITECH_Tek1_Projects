/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** manage button interaction
*/

#include "./../include/defender.h"

obj_t   *manage_button(obj_t *bt, sfVector2i m_pos)
{
    if (sfFloatRect_contains(&bt->rect, m_pos.x, m_pos.y)) {
        bt->part.top = bt->speed;
        sfSprite_setTextureRect(bt->sprite, bt->part);
    } else {
        if (bt->part.top != 0) {
            bt->part.top = 0;
            sfSprite_setTextureRect(bt->sprite, bt->part);
        }
    }
    return (bt);
}
