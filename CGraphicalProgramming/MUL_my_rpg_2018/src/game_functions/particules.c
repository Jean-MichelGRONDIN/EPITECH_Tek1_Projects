/*
** EPITECH PROJECT, 2019
** qsd
** File description:
** ds
*/

#include "./../../include/rpg.h"

particules_t *set_vertex_pos_i(particules_t *parti, sfVector2f tmp, int i)
{
    int x = parti->size_par.x;
    int y = parti->size_par.y;

    parti->ver[i * 4].position = struct_vector2f(tmp.x, tmp.y);
    parti->ver[i * 4 + 1].position = struct_vector2f(tmp.x + x, tmp.y);
    parti->ver[i * 4 + 2].position = struct_vector2f(tmp.x + x, tmp.y + y);
    parti->ver[i * 4 + 3].position = struct_vector2f(tmp.x, tmp.y + y);
    return (parti);
}

particules_t *set_color_ver(particules_t *parti, sfColor color, int i)
{
    parti->ver[i * 4].color = color;
    parti->ver[i * 4 + 1].color = color;
    parti->ver[i * 4 + 2].color = color;
    parti->ver[i * 4 + 3].color = color;
    return (parti);
}

particules_t *set_ver_texcoo(particules_t *parti, int x, int y, int i)
{
    parti->ver[i * 4].texCoords = struct_vector2f(0, 0);
    parti->ver[i * 4 + 1].texCoords = struct_vector2f(x, 0);
    parti->ver[i * 4 + 2].texCoords = struct_vector2f(x, y);
    parti->ver[i * 4 + 3].texCoords = struct_vector2f(0, y);
    return (parti);
}

particules_t *recreat_part(particules_t *parti, sfVector2f tmp, int i)
{
    int x = parti->size_par.x;
    int y = parti->size_par.y;

    parti->ver[i * 4].position = struct_vector2f(tmp.x, tmp.y);
    parti->ver[i * 4 + 1].position = struct_vector2f(tmp.x + x, tmp.y);
    parti->ver[i * 4 + 2].position = struct_vector2f(tmp.x + x, tmp.y + y);
    parti->ver[i * 4 + 3].position = struct_vector2f(tmp.x, tmp.y + y);
    parti->ver[i * 4].color.a = 255;
    parti->ver[i * 4 + 1].color.a = 255;
    parti->ver[i * 4 + 2].color.a = 255;
    parti->ver[i * 4 + 3].color.a = 255;
    return (parti);
}

particules_t *mv_part(particules_t *parti, int i)
{
    parti->ver[i * 4].position.y += parti->speed[i].y;
    parti->ver[i * 4 + 1].position.y += parti->speed[i].y;
    parti->ver[i * 4 + 2].position.y += parti->speed[i].y;
    parti->ver[i * 4 + 3].position.y += parti->speed[i].y;
    parti->ver[i * 4].position.x += parti->speed[i].x;
    parti->ver[i * 4 + 1].position.x += parti->speed[i].x;
    parti->ver[i * 4 + 2].position.x += parti->speed[i].x;
    parti->ver[i * 4 + 3].position.x += parti->speed[i].x;
    return (parti);
}
