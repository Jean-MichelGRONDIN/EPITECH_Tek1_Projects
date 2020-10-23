/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** action to refresh the window
*/

#include "./../include/runner.h"

void    window_action(sfRenderWindow *window)
{
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
}
