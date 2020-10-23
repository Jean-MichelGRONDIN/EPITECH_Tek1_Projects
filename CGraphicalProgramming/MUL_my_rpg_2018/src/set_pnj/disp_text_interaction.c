/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** disp_text_interaction
*/

#include "./../../include/rpg.h"

sfText *set_text(char *str)
{
    sfText *text;
    sfFont *font;

    text = sfText_create();
    font = sfFont_createFromFile("./assets/ARCADECLASSIC.TTF");
    sfText_setFont(text, font);
    sfText_setString(text, str);
    sfText_setColor(text, sfBlue);
    sfText_setScale(text, (sfVector2f){0.2, 0.2});
    return (text);
}

sfVector2f right_pos(sfVector2f pos, float x, float y)
{
    sfVector2f res;

    res.x = pos.x + x;
    res.y = pos.y + y;
    return (res);
}
