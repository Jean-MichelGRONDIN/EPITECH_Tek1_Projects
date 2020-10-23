/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init dirrentes type of vector structs
*/

#include "./../../include/rpg.h"

sfVector2f init_vector_two_f(float x, float y)
{
    sfVector2f position;

    position.x = x;
    position.y = y;
    return (position);
}

sfVector2i init_vector_two_i(int x, int y)
{
    sfVector2i position;

    position.x = x;
    position.y = y;
    return (position);
}