/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** display_money
*/

#include "./../include/defender.h"

list_t  *display_money(list_t *list, rules_t *rules, sfRenderWindow *window)
{
    sfText *text;
    sfFont  *font;
    sfVector2f  pos;
    char    *score = int_to_str(rules->money);

    pos.x = 230;
    pos.y = 60;
    text = sfText_create();
    sfText_setString(text, score);
    sfText_setPosition(text, pos);
    font = sfFont_createFromFile("./assets/ARCADECLASSIC.TTF");
    sfText_setFont(text, font);
    sfRenderWindow_drawSprite(window, list->obj->sprite, NULL);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
    sfFont_destroy(font);
    score = free_cleanly_this_str(score);
    return (list);
}