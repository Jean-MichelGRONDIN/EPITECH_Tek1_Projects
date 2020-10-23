/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** display_usage
*/

#include "rpg.h"

void    print_mandatory(void)
{
    my_putstr("Mandatory\n");
    my_putstr("-the window can be closed using events,\n");
    my_putstr("-the game manages the input from the mouse");
    my_putstr(" click and keyboard,\n");
    my_putstr("-the game contains animated sprites rendered");
    my_putstr(" thanks to sprite sheets,\n");
    my_putstr("-animations in your program are frame rate independent,\n");
    my_putstr("-animations and movements in your program");
    my_putstr(" are timed by clocks.\n");
    my_putstr("\nTechnical Requierements\n");
    my_putstr("-A collision system including moving and static");
    my_putstr(" elements with different shapes.\n");
    my_putstr("-A simple particle system that can display");
    my_putstr(" at least 2 types of particles.\n");
    my_putstr("-Particle effects\n");
    my_putstr("-Camera movements (zoom, translation, rotation).\n");
}

void    print_must(void)
{
    my_putstr("Must\n");
    my_putstr("-A starting menu with at least two buttons, one to launch");
    my_putstr(" a game, and one to quit the game.\n");
    my_putstr("-Anescapekey to pause the game when launched.\n");
    my_putstr("-A menu when the game is paused with at least two buttons,");
    my_putstr(" one to go to the starting menu and theother to leave ");
    my_putstr("the game.\n-A basic fighting system.\n");
    my_putstr("-An inventory and status menu.\n");
}

void    print_should(void)
{
    my_putstr("Should\n");
    my_putstr("-Your windowshouldstick between 800x600 pixels and");
    my_putstr(" 1920x1080 pixels.\n");
    my_putstr("-The gameshouldhave an “How To play” menu, explaining");
    my_putstr(" how to play your game.\n");
    my_putstr("-The gameshouldhave NPC with whom the player can interact.\n");
    my_putstr("-The buttons in your gameshouldhave at least three visual");
    my_putstr(" states: idle, hover, and clicked.\n");
    my_putstr("-The gameshouldhave a beginning and an end.\n");
}

void    print_could(void)
{
    my_putstr("Could\n");
    my_putstr("-have different types of enemies.\n");
    my_putstr("-have a particle engine.\n");
    my_putstr("\nWould\n");
    my_putstr("-Your program would be a real video game.\n");
}

void    display_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("   ./my_rpg\n");
    my_putchar('\n');
    print_mandatory();
    my_putchar('\n');
    print_must();
    my_putchar('\n');
    print_should();
    my_putchar('\n');
    print_could();
}