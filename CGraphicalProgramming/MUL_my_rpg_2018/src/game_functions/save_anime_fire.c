/*
** EPITECH PROJECT, 2019
** sdqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"

void place_part_fire(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    int x = parti->size_par.x;
    int y = parti->size_par.y;
    sfVector2f tmp;
    int dir = 0;

    for (i = 0; i != parti->size; i++) {
        tmp = struct_vector2f((rand () % 391 + 809), rand()% 50 + 528);
        if ((dir = rand() % 2) == 0)
            dir = 1;
        else
            dir = -1;
        parti->speed[i] = struct_vector2f(
            (rand() % 25 + 2) * parti->dir_speed.x,
            (((rand() % 10) + 1) / 2) * dir + 2);
        parti = set_vertex_pos_i(parti, tmp, i);
        parti = set_color_ver(parti, parti->color, i);
        parti = set_ver_texcoo(parti, x, y, i);
    }
    pers = pers;
}

sfVector2f equ_fire(particules_t *parti, int i)
{
    sfVector2f y;

    y.x = ((parti->ver[i * 4].position.x - 809) *
            (0.15) + 580) + rand() % 100;
    y.y = ((parti->ver[i * 4].position.x - 809) *
            (-0.15) + 550) - rand() % 100;
    return (y);

}

particules_t *mv_fire(particules_t *parti, int i, sfVector2f y, sfVector2f tmp)
{
    if (parti->ver[i * 4].position.y < y.y && parti->speed[i].y < 0)
        parti->speed[i].y *= -1;
    if (parti->ver[i * 4].position.y > y.x && parti->speed[i].y > 0)
        parti->speed[i].y *= -1;
    if (parti->ver[i * 4].color.a <= 0) {
        tmp = struct_vector2f(rand () % 391 + 809, rand() % 50 + 528);
        parti = recreat_part(parti, tmp, i);
    }
    if (parti->ver[i * 4].position.x > 1100) {
        parti = trans_part(parti, 5, i);
    }
    return (parti);
}

particules_t *move_fire(particules_t *parti, texture_stat_t *pers)
{
    int i = 0;
    sfVector2f tmp;
    sfVector2f y;

    for (; i != parti->size; i++) {
        y = equ_fire(parti, i);
        mv_fire(parti, i, y, tmp);
        mv_part(parti, i);
    }
    pers = pers;
    return (parti);
}

void draw_fire(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers)
{
    static int step = 0;
    sfTime time;
    static sfInt64 spend_time = 0;

    if (step == 0) {
        place_part_fire(parti, t_pers);
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
        parti = move_fire(parti, t_pers);
        sfClock_restart(parti->time_life->clock);
    }
}
