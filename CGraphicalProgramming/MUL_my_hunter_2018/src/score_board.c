/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** all functions for scoreboards
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

void    display_scoreboard(duck_t *duck)
{
    my_putstr("\n##########################\n\n");
    my_putstr("Votre score de la partie :");
    my_put_nbr(duck->deaths);
    my_putstr("\n\n");
    my_putstr("##########################\n\n");
}
