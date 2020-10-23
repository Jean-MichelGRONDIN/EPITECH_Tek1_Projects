/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** choose where to send the user : menu or game ...
*/

#include "./../../include/rpg.h"

int program_loop(void)
{
    sfRenderWindow  *window = create_my_window(1920, 1080, 60);
    int stage = MENU;

    while (stage != CLOSE && sfRenderWindow_isOpen(window)) {
        if (stage == MENU) {
            stage = menu_loop(window);
        }
        if (stage == GAME) {
            waiting_screen(window);
            stage = game_loop(window);
        }
    }
    sfRenderWindow_destroy(window);
    return (0);
}