/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** manage plant button
*/

#include "./../include/defender.h"

obj_t   *manage_if_help_button_or_not(sfRenderWindow *window,
    obj_t *btt, rules_t *rules)
{
    if (btt->state == HELP)
        pause_and_print_this_screen(window, "./assets/help_plant.png");
    else
        rules->selected = btt->state;
    return (btt);
}

obj_t   *manage_plant_button(obj_t *btt, sfVector2i m_pos,
    rules_t *rules, sfRenderWindow *window)
{
    if (sfFloatRect_contains(&btt->rect, m_pos.x, m_pos.y)) {
        if (rules->pressed == NO && rules->selected == -1)
            btt->part.left = btt->speed;
        else if (rules->selected == -1 && rules->pressed == YES) {
            btt->part.left = btt->max;
            btt = manage_if_help_button_or_not(window, btt, rules);
        } else if (rules->pressed == YES && rules->selected != -1)
            rules->selected = -1;
        sfSprite_setTextureRect(btt->sprite, btt->part);
    } else {
        if (btt->part.left != 0 && rules->selected == -1) {
            btt->part.left = 0;
            sfSprite_setTextureRect(btt->sprite, btt->part);
        }
    }
    return (btt);
}