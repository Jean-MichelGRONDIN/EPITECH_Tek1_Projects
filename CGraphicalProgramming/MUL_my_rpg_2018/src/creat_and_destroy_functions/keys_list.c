/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** function to init key list and to free it
*/

#include "./../../include/rpg.h"

key_array_t **all_init_calls(key_array_t **list)
{
    list = arrow_part_and_shift(list);
    list = zoom_part(list);
    list = inventory_part(list);
    list = interaction_part(list);
    return (list);
}

key_array_t **init_key_array(void)
{
    int nb = 8;
    key_array_t **list = malloc(sizeof(key_array_t *) * (nb + 1));
    int i = 0;

    while (i != nb) {
        list[i] = malloc(sizeof(**list));
        i = i + 1;
    }
    list[nb] = NULL;
    list = all_init_calls(list);
    return (list);
}

key_array_t **free_key_list(key_array_t **list)
{
    int i = 0;

    while (list[i] != NULL) {
        free(list[i]);
        list[i] = NULL;
        i = i + 1;
    }
    free(list);
    list = NULL;
    return (list);
}