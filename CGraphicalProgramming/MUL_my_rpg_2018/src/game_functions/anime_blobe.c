/*
** EPITECH PROJECT, 2019
** sdqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"
#include <math.h>

void place_part_bl(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    int x = parti->size_par.x;
    int y = parti->size_par.y;
    sfVector2f tmp;

    for (i = 0; i != parti->size; i++) {
        tmp = struct_vector2f(rand() % 1920, rand() % 1080);
        parti->speed[i] = struct_vector2f(
            0, (rand() % 4 + 2) * parti->dir_speed.y);
        parti = set_vertex_pos_i(parti, tmp, i);
        parti = set_color_ver(parti, parti->color, i);
        parti = set_ver_texcoo(parti, x, y, i);
    }
    parti = trans_part(parti, 255, 0);
    pers = pers;
}

particules_t *move_bl(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    sfVector2f tmp;

    for (i = 1; i != parti->size; i++) {
        if (parti->ver[i * 4].position.y > 1080) {
            tmp = struct_vector2f(rand() % 1920, 0);
            parti->speed[i] = struct_vector2f(
            0, (rand() % 4 + 2) * parti->dir_speed.y);
            parti = recreat_part(parti, tmp, i);
        }
        mv_part(parti, i);
    }
    mv_part(parti, 0);
    pers = pers;
    return (parti);
}

void draw_bl(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers)
{
    static int step = 0;
    sfTime time;
    static sfInt64 spend_time = 0;

    if (step == 0) {
        place_part_bl(parti, t_pers);
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
        parti = move_bl(parti, t_pers);
        sfClock_restart(parti->time_life->clock);
    }
}
