/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** display in real time the score
*/

#include "./../include/runner.h"

void    display_default_msg(sfRenderWindow *window, int cols, int line)
{
    sfText  *text;
    sfVector2f  position;
    sfFont  *font;

    position.x = cols;
    position.y = line;
    text = sfText_create();
    sfText_setString(text, "Current Score Is ");
    sfText_setPosition(text, position);
    font = sfFont_createFromFile("textures/font/ARCADECLASSIC.TTF");
    sfText_setFont(text, font);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
}

void    display_score_msg(sfRenderWindow *window, int cols ,
    int line, rulers_t *rules)
{
    char    *score = int_to_str(rules->score);
    sfText  *text;
    sfVector2f  position;
    sfFont  *font;

    position.x = cols + 320;
    position.y = line;
    text = sfText_create();
    sfText_setString(text, score);
    sfText_setPosition(text, position);
    font = sfFont_createFromFile("textures/font/ARCADECLASSIC.TTF");
    sfText_setFont(text, font);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
    free(score);
}

void    display_real_time_score(sfRenderWindow *window,
    int x, int y, rulers_t *rules)
{
    display_default_msg(window, x, y);
    display_score_msg(window, x, y, rules);
}
