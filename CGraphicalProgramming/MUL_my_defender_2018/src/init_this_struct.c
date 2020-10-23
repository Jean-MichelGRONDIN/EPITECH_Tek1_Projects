/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init the struct linked to the type passed by params
*/

#include "./../include/defender.h"

struct_list_t   **init_the_struct_list(void)
{
    int nb = 4;
    struct_list_t   **list = malloc(sizeof(list) * (nb + 1));

    list[0] = malloc(sizeof(struct_list_t));
    list[0]->type = GENERATOR;
    list[0]->init = &init_sunflower;
    list[1] = malloc(sizeof(struct_list_t));
    list[1]->type = BASIC_TOWER;
    list[1]->init = &init_basic_tower;
    list[2] = malloc(sizeof(struct_list_t));
    list[2]->type = FROZEN_TOWER;
    list[2]->init = &init_frozen;
    list[3] = malloc(sizeof(struct_list_t));
    list[3]->type = WALL;
    list[3]->init = &init_wall;
    list[nb] = NULL;
    return (list);
}

obj_t   *init_this_struct(int type, sfVector2f garden)
{
    int i = 0;
    struct_list_t   **list = init_the_struct_list();

    while (list[i] != NULL) {
        if (type == list[i]->type)
            return (list[i]->init(garden));
        i = i + 1;
    }
    return (NULL);
}