/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free this clock struc
*/

#include "./../../include/rpg.h"

my_clock_t  *free_this_clock(my_clock_t *obj)
{
    sfClock_destroy(obj->clock);
    free(obj);
    obj = NULL;
    return (obj);
}