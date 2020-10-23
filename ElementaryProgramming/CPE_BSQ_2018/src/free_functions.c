/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** free functions
*/

#include <stdlib.h>
#include "./../include/my.h"
#include "./../include/bootstrap.h"

void    free_position(position_t *position)
{
    int i = 0;

    while (i != position->y_max) {
        free(position->map[i]);
        position->map[i] = NULL;
        i = i + 1;
    }
    free(position->map);
    position->map = NULL;
    free(position->str);
    position->str = NULL;
    free(position);
}
