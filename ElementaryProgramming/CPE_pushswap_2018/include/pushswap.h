/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** prototype if the project
*/

#ifndef __PUSHSWAP_H__
#define __PUSHSWAP_H__

#include "./my.h"
#include "./include.h"

typedef struct lists {
    int size_a;
    int *l_a;
    int size_b;
    int *l_b;
} lists_t;

void    swap(int *list, int size);

void    swap_elem(int *array, int index1, int index2);
void    bubble_sort_array(int *array, int size);

void    rotate_left(int *array, int size);

void    rotate_right(int *array, int size);

#endif
