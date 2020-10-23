/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** init_tetrimino_struc
*/

#include "./../include/tetris.h"

tetrimino_t *init_tetrimino_struc(void)
{
    tetrimino_t *new = malloc(sizeof(*new));

    new->name = NULL;
    new->shape = NULL;
    new->t_color = -1;
    new->t_height = -1;
    new->t_width = -1;
    return (new);
}