/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** the loop of the prog where we will call the menu, the game ...
*/

#include "./../include/defender.h"

int launcher_loop(void)
{
    sfRenderWindow  *window = create_my_window(1452, 768, 60);
    int stage = MENU;
    rules_t *rules = init_rules();

    sfMusic_play(rules->music);
    while (stage != CLOSE && sfRenderWindow_isOpen(window)) {
        if (stage == MENU) {
            stage = menu_window(window);
            waiting_screen(window);
        }
        if (stage == GAME) {
            sfMusic_stop(rules->music);
            stage = game_loop(window);
            waiting_screen(window);
            sfMusic_play(rules->music);
        }
    }
    rules = free_rules(rules);
    sfRenderWindow_destroy(window);
    return (0);
}
