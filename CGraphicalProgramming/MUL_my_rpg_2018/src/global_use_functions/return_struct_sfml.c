/*
** EPITECH PROJECT, 2019
** sqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"

sfVector2f struct_vector2f(float x, float y)
{
    sfVector2f new;

    new.x = x;
    new.y = y;
    return (new);
}

sfVector2i struct_vector2i(int x, int y)
{
    sfVector2i new;

    new.x = x;
    new.y = y;
    return (new);
}

sfFloatRect struct_floatrect(float left, float top, float width, float height)
{
    sfFloatRect new;

    new.left = left;
    new.top = top;
    new.width = width;
    new.height = height;
    return (new);
}

sfIntRect struct_intrect(int left, int top, int width, int height)
{
    sfIntRect new;

    new.left = left;
    new.top = top;
    new.width = width;
    new.height = height;
    return (new);
}