/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** disp_usage
*/

#include "./../include/defender.h"

void    disp_mandatory(void)
{
    my_putstr("MANDATORY\n");
    my_putstr("  -the window can be closed using events,\n");
    my_putstr("  -the game manages the input from the mouse");
    my_putstr(" click and keyboard,\n");
    my_putstr("  -the game contains animated sprites");
    my_putstr(" rendered thanks to sprite sheets,\n");
    my_putstr("  -animations in your program are frame rate independent,\n");
    my_putstr("  -animations and movements in your program are");
    my_putstr(" timed by clocks.\n");
}

void    disp_must(void)
{
    my_putstr("MUST:\n");
    my_putstr("  -a starting menu with at least two buttons, one");
    my_putstr(" to launch a game, and one to quit the game,\n");
    my_putstr("  -an escape key to pause the game when launched,\n");
    my_putstr("  -a menu when the game is paused with at least");
    my_putstr(" three buttons, one to resume the game, one to go to\n");
    my_putstr("   the starting menu and the one to leave the game,\n");
    my_putstr("  -at least 4 different types of buildings,\n");
    my_putstr("  -a building menu showing the different available");
    my_putstr(" buildings and their price,\n");
    my_putstr("  -at least 2 different sound effects, and one");
    my_putstr(" looping background music.\n");
    my_putstr("  -The starting menu and the gamemustbe two");
    my_putstr(" different scenes.\n");
}

void    disp_should(void)
{
    my_putstr("SHOULD:\n");
    my_putstr("  -a windows that sticks between 800x600");
    my_putstr(" pixels and 1920x1080 pixels.\n");
    my_putstr("  -a “How To play” menu, explaining how to play");
    my_putstr(" your game.\n");
    my_putstr("  -buttons with at least three visual states:");
    my_putstr(" idle, hover, and clicked.\n");
}

void    disp_usage(void)
{
    my_putstr("USAGE:\n");
    my_putstr("    ./my_defender\n\n");
    disp_mandatory();
    disp_must();
    disp_should();
}