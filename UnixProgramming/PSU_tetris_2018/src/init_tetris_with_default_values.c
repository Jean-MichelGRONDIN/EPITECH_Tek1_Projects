/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** init a tetris truc with default values
*/

#include "./../include/tetris.h"

tetris_t    *init_tetris_with_default_values(void)
{
    tetris_t    *tetris = malloc(sizeof(*tetris));

    tetris->level = 1;
    tetris->k_left = KEY_LEFT;
    tetris->k_right = KEY_RIGHT;
    tetris->k_turn = KEY_UP;
    tetris->k_drop = KEY_DOWN;
    tetris->k_quit = 'q';
    tetris->k_pause = ' ';
    tetris->m_width = 10;
    tetris->m_height = 20;
    tetris->without_next = 0;
    tetris->debug = 0;
    tetris->t_list = NULL;
    return (tetris);
}