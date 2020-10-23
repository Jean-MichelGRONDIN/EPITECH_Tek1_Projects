/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_20118
** File description:
** game_loop of the game
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

void    game_loop(backg_t *backg, duck_t *duck,
    sfEvent *event, my_clock_t *time)
{
    while (sfRenderWindow_isOpen(backg->window) && time->seconds <= 30.0) {
        sfRenderWindow_drawSprite(backg->window, backg->sprite, NULL);
        duck = duck_action(duck, backg->window, time);
        while (sfRenderWindow_pollEvent(backg->window, event)) {
            analyse_events(backg->window, event, duck, time);
        }
        window_action(backg->window);
        time = get_time(time);
    }
}
