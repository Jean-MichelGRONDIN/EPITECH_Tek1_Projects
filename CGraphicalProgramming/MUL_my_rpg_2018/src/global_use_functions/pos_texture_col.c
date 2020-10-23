/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** is the texture at this pos a collision 0 if yes else 1
*/

#include "./../../include/rpg.h"

int pos_texture_col(sfVertexArray *m, int x, int y)
{
    sfVertex    *tmp = sfVertexArray_getVertex(m,
        ((x / 16) + (y / 16) * 191) * 4);

    if ((int)tmp->texCoords.x == 16 && (int)tmp->texCoords.y == 0)
        return (0);
    return (1);
}