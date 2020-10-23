/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** every function for my duck
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

duck_t  *deplace_my_duck(duck_t *duck, my_clock_t *time)
{
    if ((time->elapsed / 0.00001) >= 1.0) {
        if (duck->position.x < (1920 - 110)) {
            duck->position.x = duck->position.x + duck->speed;
        } else {
            duck->position.x = 0;
            duck->position.y = nb_alea(0, 800);
        }
        sfSprite_setPosition(duck->sprite, duck->position);
    }
    return (duck);
}

duck_t  *set_new_img_square(duck_t *duck, my_clock_t *time)
{
    if ((time->elapsed / 0.01) >= 1.0) {
        if (duck->rect.left != 220) {
            duck->rect.left = duck->rect.left + 110;
        } else {
            duck->rect.left = 0;
        }
        sfSprite_setTextureRect(duck->sprite, duck->rect);
    }
    return (duck);
}

duck_t  *duck_action(duck_t *duck, sfRenderWindow *window, my_clock_t *time)
{
    duck = deplace_my_duck(duck, time);
    duck = set_new_img_square(duck, time);
    sfRenderWindow_drawSprite(window, duck->sprite, NULL);
    return (duck);
}
