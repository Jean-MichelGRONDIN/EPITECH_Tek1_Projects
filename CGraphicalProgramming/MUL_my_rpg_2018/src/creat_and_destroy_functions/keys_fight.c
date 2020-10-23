/*
** EPITECH PROJECT, 2019
** sqd
** File description:
** qsds
*/

#include "./../../include/rpg.h"

key_array_t **init_key_fight(void)
{
    int nb = 5;
    key_array_t **list = malloc(sizeof(key_array_t *) * (nb + 1));
    int i = 0;

    while (i != nb) {
        list[i] = malloc(sizeof(**list));
        i = i + 1;
    }
    list[nb] = NULL;
    list[0]->id = sfKeyLeft;
    list[0]->movement = &button_left;
    list[1]->id = sfKeyRight;
    list[1]->movement = &button_right;
    list[2]->id = sfKeyUp;
    list[2]->movement = &button_up;
    list[3]->id = sfKeyDown;
    list[3]->movement = &button_down;
    list[4]->id = sfKeyReturn;
    list[4]->movement = &enter;
    return (list);
}