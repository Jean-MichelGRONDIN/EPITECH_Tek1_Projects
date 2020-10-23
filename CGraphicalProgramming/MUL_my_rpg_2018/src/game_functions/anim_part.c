/*
** EPITECH PROJECT, 2019
** sdqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"

void place_part_heal(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    int x = parti->size_par.x;
    int y = parti->size_par.y;
    sfVector2f tmp;

    for (i = 0; i != parti->size; i++) {
        tmp = struct_vector2f(
            rand() % pers->part.width + pers->pos.x ,
            rand() % pers->part.height + pers->pos.y);
        parti->speed[i] = struct_vector2f(
            0, (rand() % 4 + 2) * parti->dir_speed.y);
        parti = set_vertex_pos_i(parti, tmp, i);
        parti = set_color_ver(parti, parti->color, i);
        parti = set_ver_texcoo(parti, x, y, i);
    }
}

particules_t *trans_part(particules_t *parti, int nb, int i)
{
    parti->ver[i * 4].color.a -= nb;
    parti->ver[i * 4 + 1].color.a -= nb;
    parti->ver[i * 4 + 2].color.a -= nb;
    parti->ver[i * 4 + 3].color.a -= nb;
    return (parti);
}

particules_t *move_heal(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    sfVector2f tmp;

    for (; i != parti->size; i++) {
        if (parti->ver[i * 4].color.a <= 0) {
        tmp = struct_vector2f(
            rand() % pers->part.width + pers->pos.x ,
            rand() % pers->part.height + pers->pos.y);
            parti = recreat_part(parti, tmp, i);
        }
        if (parti->ver[i * 4].position.y < pers->pos.y
            || parti->ver[i * 4].position.y > pers->pos.y + pers->part.height)
            trans_part(parti, 5, i);
        mv_part(parti, i);
    }
    return (parti);
}

void draw_heal(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers)
{
    static int step = 0;
    sfTime time;
    static sfInt64 spend_time = 0;

    if (step == 0) {
        place_part_heal(parti, t_pers);
        sfClock_restart(parti->time_life->clock);
        step = 1;
    }
    time = sfClock_getElapsedTime(parti->time_life->clock);
    spend_time += time.microseconds;
    if (spend_time > 5000000) {
        step = 0;
        pers->step = FINISH;
        spend_time = 0;
        return;
    }
    if (time.microseconds > 5000) {
        parti = move_heal(parti, t_pers);
        sfClock_restart(parti->time_life->clock);
    }
}
