/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** display finale screen plan
*/

#include "./../include/runner.h"

void    print_lose_or_win(sfRenderWindow *window,
    int cols, int line, rulers_t *rules)
{
    sfText  *text;
    sfVector2f  position;
    sfFont  *font;

    position.x = cols;
    position.y = line;
    text = sfText_create();
    if (rules->lose >= 0) {
        sfText_setString(text, "You Lose !");
    } else {
        sfText_setString(text, "You Won !");
    }
    sfText_setPosition(text, position);
    font = sfFont_createFromFile("textures/font/ARCADECLASSIC.TTF");
    sfText_setFont(text, font);
    sfRenderWindow_drawText(window, text, NULL);
    sfText_destroy(text);
}

void    print_finale_screen(sfRenderWindow *window, rulers_t *rules)
{
    print_lose_or_win(window, 600, 400, rules);
    display_real_time_score(window, 600, 500, rules);
}
