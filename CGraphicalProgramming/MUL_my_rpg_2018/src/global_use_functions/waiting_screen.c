/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** waiting_screen
*/

#include "rpg.h"

void    waiting_screen(sfRenderWindow *window)
{
    sfTexture *text = sfTexture_createFromFile(
        "assets/loadingscreen.png", NULL);
    sfSprite *sp = sfSprite_create();

    sfSprite_setTexture(sp, text, sfTrue);
    window_action(window);
    sfRenderWindow_drawSprite(window, sp, NULL);
    sfRenderWindow_display(window);
    sfTexture_destroy(text);
    sfSprite_destroy(sp);
}