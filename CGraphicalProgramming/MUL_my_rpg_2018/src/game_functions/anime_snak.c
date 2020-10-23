/*
** EPITECH PROJECT, 2019
** sdqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"
#include <math.h>

particules_t *rand_speed_snak(particules_t *parti, int i)
{
    int diry = 0;

    if ((diry = rand() % 2) == 0)
        diry = 1;
    else
        diry = -1;
    parti->speed[i] = struct_vector2f(
        (rand() % 6 + 1) * parti->dir_speed.x,
        (rand() % 4 + 1) * diry);
    return (parti);
}

void place_part_sn(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    int x = parti->size_par.x;
    int y = parti->size_par.y;
    sfVector2f tmp;

    for (i = 0; i != parti->size; i++) {
        tmp = struct_vector2f(rand() % 211 + 1009, rand() % 100 + 367);
        parti = rand_speed_snak(parti, i);
        parti = set_vertex_pos_i(parti, tmp, i);
        parti = set_color_ver(parti, parti->color, i);
        parti = set_ver_texcoo(parti, x, y, i);
    }
    pers = pers;
}

particules_t *move_sn(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    sfVector2f tmp;

    for (i = 0; i != parti->size; i++) {
        if (parti->ver[i * 4].color.a <= 0) {
            tmp = struct_vector2f(1220, rand() % 100 + 367);
            parti = rand_speed_snak(parti, i);
            parti = recreat_part(parti, tmp, i);
        }
        if (parti->ver[i * 4].position.x < 809)
            parti = trans_part(parti, 5, i);
        if (parti->ver[i * 4].position.y < 467
            + rand() % 100 && parti->speed[i].y < 0)
            parti->speed[i].y *= -1;
        if (parti->ver[i * 4].position.y > 557 + rand() % 100
            && parti->speed[i].y > 0)
            parti->speed[i].y *= -1;
        mv_part(parti, i);
    }
    pers = pers;
    return (parti);
}

void draw_sn(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers)
{
    static int step = 0;
    sfTime time;
    static sfInt64 spend_time = 0;

    if (step == 0) {
        place_part_sn(parti, t_pers);
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
        parti = move_sn(parti, t_pers);
        sfClock_restart(parti->time_life->clock);
    }
}
