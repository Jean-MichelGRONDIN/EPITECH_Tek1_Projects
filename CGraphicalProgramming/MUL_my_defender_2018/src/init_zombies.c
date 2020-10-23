/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init zombies
*/

#include "./../include/defender.h"

sfVector2f  get_zombie_position(int nb)
{
    sfVector2f pos;

    pos.x = 1500;
    pos.y = -1;
    if (pos.y == -1 && (nb % 5) == 0)
        pos.y = 600;
    if (pos.y == -1 && (nb % 4) == 0)
        pos.y = 500;
    if (pos.y == -1 && (nb % 3) == 0)
        pos.y = 400;
    if (pos.y == -1 && (nb % 2) == 0)
        pos.y = 300;
    if (pos.y == -1 && (nb % 1) == 0)
        pos.y = 200;
    return (pos);
}

list_t  *init_zombies(list_t *list, int *id, rules_t *rules, float when)
{
    float   now = rules->spawn_delay + when;
    sfVector2f  pos = get_zombie_position(id[1]);

    list = add_obj_to_list(init_basic_zombie(pos, now), list);
    return (list);
}