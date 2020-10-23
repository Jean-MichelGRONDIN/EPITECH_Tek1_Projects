/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** display things like message of win or lose
*/

#include "./../include/sokoban.h"

void    print_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, containing ‘#’");
    my_putstr(" for walls,\n");
    my_putstr("         ‘P’ for the player, ‘X’ for boxes and ‘O’ for ");
    my_putstr("storage locations.\n");
}

void    print_map(world_t *world)
{
    int line = 0;
    int i = 0;

    while (i != world->y_max) {
        mvprintw(line, 0, "%s", world->map[i]);
        line = line + 1;
        i = i + 1;
    }
}

void    print_win(void)
{
    clear();
    printw("CONGRATULATION !");
    mvprintw(1, 0, "You have won !!");
    mvprintw(2, 0, "The game will close in 5 secondes .");
    refresh();
    usleep(5000000);
    endwin();
    exit(0);
}

void    print_lose(void)
{
    clear();
    printw("SORRY !");
    mvprintw(1, 0, "You have lose !!");
    mvprintw(2, 0, "The game will close in 5 secondes .");
    refresh();
    usleep(5000000);
    endwin();
    exit(1);
}

void    print_end(int x)
{
    if (x == 1) {
        print_win();
    } else if (x == -1) {
        print_lose();
    }
}
