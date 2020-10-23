/*
** EPITECH PROJECT, 2019
** sdqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"
#include <math.h>

particules_t *rand_speed_elec(particules_t *parti, int i)
{
    int dirx = 0;
    int diry = 0;

    if ((dirx = rand() % 2) == 0)
        dirx = 1;
    else
        dirx = -1;
    if ((diry = rand() % 2) == 0)
        diry = 1;
    else
        diry = -1;
    parti->speed[i] = struct_vector2f(
        (((rand() % 10) + 1)) * dirx + 2, (((rand() % 10) + 1)) * diry + 2);
    return (parti);
}

void place_part_elec(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    int x = parti->size_par.x;
    int y = parti->size_par.y;
    sfVector2f tmp;

    for (i = 0; i != parti->size; i++) {
        tmp = struct_vector2f(809, 563);
        parti = rand_speed_elec(parti, i);
        parti = set_vertex_pos_i(parti, tmp, i);
        parti = set_color_ver(parti, parti->color, i);
        parti = set_ver_texcoo(parti, x, y, i);
    }
    parti->speed[0].y = 0;
    parti->speed[0].x = 6;
    parti = trans_part(parti, 255, 0);
    pers = pers;
}

particules_t *mv_elec(particules_t *parti, int i)
{
    if (parti->ver[0].position.x < 1300
        && pow(parti->ver[i * 4].position.x - parti->ver[0].position.x, 2) +
        pow(parti->ver[i * 4].position.y - parti->ver[0].position.y, 2) >
        rand() % 4000 + 6000) {
        parti = trans_part(parti, 255, i);
    }
    if (parti->ver[0].position.x > 1300 && parti->ver[i * 4].color.a > 5)
        parti = trans_part(parti, 5, i);
    if (parti->ver[0].position.x > 1300 && parti->speed[i].x < 0) {
        parti->speed[i].x *= -1;
    }
    if (parti->ver[0].position.x < 1300)
        parti = rand_speed_elec(parti, i);
    return (parti);
}

particules_t *move_elec(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    sfVector2f tmp;

    for (i = 1; i != parti->size; i++) {
        if (parti->ver[0].position.x < 1300
            && parti->ver[i * 4].color.a <= 0) {
            parti = rand_speed_elec(parti, i);
            tmp = struct_vector2f(
            parti->ver[0].position.x, parti->ver[0].position.y);
            parti = recreat_part(parti, tmp, i);
        }
        mv_elec(parti, i);
        mv_part(parti, i);
    }
    mv_part(parti, 0);
    pers = pers;
    return (parti);
}

void draw_elec(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers)
{
    static int step = 0;
    sfTime time;
    static sfInt64 spend_time = 0;

    if (step == 0) {
        place_part_elec(parti, t_pers);
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
        parti = move_elec(parti, t_pers);
        sfClock_restart(parti->time_life->clock);
    }
}
