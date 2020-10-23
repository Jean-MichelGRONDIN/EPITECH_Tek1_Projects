/*
** EPITECH PROJECT, 2019
** sqd
** File description:
** qd
*/

#include "./../../include/rpg.h"

particules_t *ini_heal_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(1, -1);
    new->size = 500;
    new->size_par = struct_vector2f(11, 11);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 5;
    new->time_life->clock = sfClock_create();
    new->color = sfGreen;
    new->state = init_sate("./assets/stars.png");
    return (new);
}

particules_t *ini_snarl_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(1, 1);
    new->size = 500;
    new->size_par = struct_vector2f(11, 11);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 5;
    new->time_life->clock = sfClock_create();
    new->color = sfBlue;
    new->state = init_sate("./assets/stars.png");
    return (new);
}

particules_t *ini_elec_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(1, 1);
    new->size = 4096;
    new->size_par = struct_vector2f(11, 11);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 3;
    new->time_life->clock = sfClock_create();
    new->color = sfCyan;
    new->state = init_sate("./assets/stars.png");
    return (new);
}

particules_t *ini_fire_part(void)
{
    particules_t *new = malloc(sizeof(*new));

    new->dir_speed = struct_vector2f(1, 1);
    new->size = 4096;
    new->size_par = struct_vector2f(11, 11);
    new->ver = malloc(sizeof(sfVertex) * new->size * 4);
    new->speed = malloc(sizeof(sfVector2f) * new->size);
    new->time_life = malloc(sizeof(my_clock_t));
    new->time_life->seconds = 3;
    new->time_life->clock = sfClock_create();
    new->color = sfRed;
    new->state = init_sate("./assets/stars.png");
    return (new);
}

sfRenderStates *init_sate(char *str)
{
    sfRenderStates *state;

    if (str == NULL)
        return (NULL);
    state = malloc(sizeof(*state));
    state->shader = NULL;
    state->blendMode = sfBlendAlpha;
    state->transform = sfTransform_Identity;
    state->texture = sfTexture_createFromFile(str, NULL);
    return (state);
}