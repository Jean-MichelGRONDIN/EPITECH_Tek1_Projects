/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** all initialise functions
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

backg_t *initialise_background(backg_t *backg)
{
    backg->texture = sfTexture_createFromFile("textures/background4.jpg", NULL);
    backg->sprite = sfSprite_create();
    sfSprite_setTexture(backg->sprite, backg->texture, sfTrue);
    return (backg);
}

duck_t  *initialise_rect(duck_t *duck)
{
    duck->speed = 20;
    duck->position.x = 0;
    duck->position.y = nb_alea(0, 800);
    duck->sprite = sfSprite_create();
    duck->texture = sfTexture_createFromFile("textures/duck.png", NULL);
    sfSprite_setTexture(duck->sprite, duck->texture, sfTrue);
    duck->rect.top = 0;
    duck->rect.left = 0;
    duck->rect.width = 110;
    duck->rect.height = 110;
    sfSprite_setTextureRect(duck->sprite, duck->rect);
    return (duck);
}

sfRenderWindow  *create_my_window(int wid, int heig)
{
    sfRenderWindow  *window;
    sfVideoMode video_mode;

    video_mode.width = wid;
    video_mode.height = heig;
    video_mode.bitsPerPixel = 120;
    window = sfRenderWindow_create(video_mode, "J-M window",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 5);
    return (window);
}
