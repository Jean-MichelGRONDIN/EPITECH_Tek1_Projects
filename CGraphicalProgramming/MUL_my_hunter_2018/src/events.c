/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** events management
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

void    manage_mouse_click(sfMouseButtonEvent event,
    duck_t *duck, my_clock_t *time)
{
    if (event.x >= duck->position.x && event.x <= (duck->position.x + 110)) {
        if (event.y >= duck->position.y &&
            event.y <= (duck->position.y + 110)) {
            duck->position.x = 1810;
            duck->speed = duck->speed + 15;
            deplace_my_duck(duck, time);
            duck->deaths = duck->deaths + 1;
        }
    }
}

void    analyse_events(sfRenderWindow *window, sfEvent *event,
    duck_t *duck, my_clock_t *time)
{
    if (event->type == sfEvtMouseButtonReleased) {
        manage_mouse_click(event->mouseButton, duck, time);
    } else if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
}
