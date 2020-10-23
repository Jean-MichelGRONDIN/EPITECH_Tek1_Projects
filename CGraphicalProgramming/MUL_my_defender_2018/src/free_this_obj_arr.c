/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** free n case of this obj arr
*/

#include "./../include/defender.h"

obj_t   **free_this_obj_arr(obj_t **obj, int n)
{
    int i = 0;

    while (i < n && obj[i] != NULL) {
        obj[i] = free_this_obj(obj[i]);
        i = i + 1;
    }
    free(obj);
    obj = NULL;
    return (obj);
}
