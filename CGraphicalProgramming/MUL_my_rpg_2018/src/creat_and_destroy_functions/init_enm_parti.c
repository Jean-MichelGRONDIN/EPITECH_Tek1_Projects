/*
** EPITECH PROJECT, 2019
** dsq
** File description:
** sqd
*/

#include "./../../include/rpg.h"

particules_t *ini_blobe_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(1, 2);
    new->size = 4096;
    new->size_par = struct_vector2f(2, 3);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 3;
    new->time_life->clock = sfClock_create();
    new->color = sfMagenta;
    new->state = init_sate(NULL);
    return (new);
}

particules_t *ini_sn_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(-1, 1);
    new->size = 512;
    new->size_par = struct_vector2f(64, 64);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 3;
    new->time_life->clock = sfClock_create();
    new->color = sfGreen;
    new->state = init_sate("./assets/zZp9nvB.png");
    return (new);
}

particules_t *ini_sor_one_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(1, 2);
    new->size = 4096;
    new->size_par = struct_vector2f(2, 3);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 3;
    new->time_life->clock = sfClock_create();
    new->color = sfRed;
    new->state = init_sate(NULL);
    return (new);
}

particules_t *ini_sor_two_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(-1, 1);
    new->size = 512;
    new->size_par = struct_vector2f(64, 64);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 3;
    new->time_life->clock = sfClock_create();
    new->color = sfRed;
    new->state = init_sate("./assets/zZp9nvB.png");
    return (new);
}