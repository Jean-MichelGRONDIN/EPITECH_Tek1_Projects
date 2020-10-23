/*
** EPITECH PROJECT, 2018
** PSU_my_popu_2018
** File description:
** main of the game
*/

#include <curses.h>
#include <unistd.h>

int my_strlen(char const *str);

void    game_loop(char *str)
{
    int x = 0;
    int y = 0;
    int ch;
    int position = my_strlen(str);

    getmaxyx(stdscr, y, x);
    if (position % 2 != 0)
        position = position + 1;
    mvprintw((y / 2), ((x / 2) - (position / 2)), "%s", str);
    refresh();
    while ((ch = getch()) != 'q' && (ch = getch()) != 'Q') {
        refresh();
    }
}

int main(int ac, char **av)
{
    int x = 2;
    int y = 2;

    if (ac != 2) {
        write(2, "Wrong argument(s).\n", 19);
        return (0);
    }
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();
    printw("Press q to exit");
    refresh();
    move(y, x);
    refresh();
    game_loop(av[1]);
    endwin();
    return (0);
}
