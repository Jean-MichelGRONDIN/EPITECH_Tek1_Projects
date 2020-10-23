/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** display a waiting screen
*/

#include "./../include/defender.h"

void    waiting_screen(sfRenderWindow *window)
{
    obj_t   *background = init_this_background("./assets/waiting_backg.jpg");
    my_clock_t  *wait = init_this_clock();

    window_action(window);
    sfRenderWindow_drawSprite(window, background->sprite, NULL);
    sfRenderWindow_display(window);
    while (wait->seconds < 2.0) {
        wait = get_time(wait);
    }
    background = free_this_obj(background);
    sfClock_destroy(wait->clock);
}