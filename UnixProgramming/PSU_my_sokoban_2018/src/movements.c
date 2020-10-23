/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** function lined to movements of the payer
*/

#include "./../include/sokoban.h"

int can_move_x(char s)
{
    if (s != 'X' && s != '#') {
        return (1);
    }
    return (0);
}

world_t *go_up(world_t *w)
{
    if (w->map[w->y - 1][w->x] == 'X') {
        if (can_move_x(w->map[w->y - 2][w->x]) == 1) {
            w->map[w->y - 2][w->x] = 'X';
            w->map[w->y - 1][w->x] = 'P';
            w->map[w->y][w->x] = ' ';
            w->y = w->y - 1;
        }
        return (w);
    }
    w->map[w->y - 1][w->x] = 'P';
    w->map[w->y][w->x] = ' ';
    w->y = w->y - 1;
    return (w);
}

world_t *go_down(world_t *w)
{
    if (w->map[w->y + 1][w->x] == 'X') {
        if (can_move_x(w->map[w->y + 2][w->x]) == 1) {
            w->map[w->y + 2][w->x] = 'X';
            w->map[w->y + 1][w->x] = 'P';
            w->map[w->y][w->x] = ' ';
            w->y = w->y + 1;
        }
        return (w);
    } else {
        w->map[w->y + 1][w->x] = 'P';
        w->map[w->y][w->x] = ' ';
        w->y = w->y + 1;
    }
    return (w);
}

world_t *go_left(world_t *w)
{
    if (w->map[w->y][w->x - 1] == 'X') {
        if (can_move_x(w->map[w->y][w->x - 2]) == 1) {
            w->map[w->y][w->x - 2] = 'X';
            w->map[w->y][w->x - 1] = 'P';
            w->map[w->y][w->x] = ' ';
            w->x = w->x - 1;
        }
        return (w);
    } else {
        w->map[w->y][w->x - 1] = 'P';
        w->map[w->y][w->x] = ' ';
        w->x = w->x - 1;
    }
    return (w);
}

world_t *go_right(world_t *w)
{
    if (w->map[w->y][w->x + 1] == 'X') {
        if (can_move_x(w->map[w->y][w->x + 2]) == 1) {
            w->map[w->y][w->x + 2] = 'X';
            w->map[w->y][w->x + 1] = 'P';
            w->map[w->y][w->x] = ' ';
            w->x = w->x + 1;
        }
        return (w);
    } else {
        w->map[w->y][w->x + 1] = 'P';
        w->map[w->y][w->x] = ' ';
        w->x = w->x + 1;
    }
    return (w);
}
