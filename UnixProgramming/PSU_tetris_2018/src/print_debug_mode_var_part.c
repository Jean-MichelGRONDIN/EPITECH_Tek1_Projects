/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** print the debug mode variables parts
*/

#include "./../include/tetris.h"
#include <term.h>

void    print_debug_mode(tetris_t *t)
{
    if (t == NULL)
        return;
    my_printf("*** DEBUG MODE ***\n");
    my_printf("Key Left : ");
    identify_and_print_that_one(t->k_left);
    my_printf("Key Right : ");
    identify_and_print_that_one(t->k_right);
    my_printf("Key Turn : ");
    identify_and_print_that_one(t->k_turn);
    my_printf("Key Drop : ");
    identify_and_print_that_one(t->k_drop);
    my_printf("Key Quit : ");
    identify_and_print_that_one(t->k_quit);
    my_printf("Key Pause : ");
    identify_and_print_that_one(t->k_pause);
    my_printf("Next : %s\n", t->without_next != 0 ? "Yes" : "false");
    my_printf("Level : %i\n", t->level);
    my_printf("Size : %i*%i\n", t->m_height, t->m_width);
}