/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** function that manage time
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include "./../include/object.h"
#include "./../include/my.h"

my_clock_t *get_time(my_clock_t *time)
{
    time->time = sfClock_getElapsedTime(time->clock);
    time->seconds = time->time.microseconds / 1000000.0;
    time->elapsed = time->seconds - time->elapsed;
    return (time);
}
