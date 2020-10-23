/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** function for windows actions
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

void    window_action(sfRenderWindow *window)
{
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
}
