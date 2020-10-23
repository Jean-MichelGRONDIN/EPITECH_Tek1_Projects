/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** main file of the prog
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Time.h>
#include <stdlib.h>
#include "./../include/object.h"
#include "./../include/my.h"

void    display_usage(void)
{
    my_putstr("\nTo play just do that : ./my_hunter ; with no argments\n");
    my_putstr("The player is a hunter who shoots ducks with right click.\n");
    my_putstr("Ducks appear randomly and move from one side to another.\n");
    my_putstr("The duck move faster than the nb of time a duck is killed.\n");
    my_putstr("___________________________________________________\n\n");
    my_putstr("**I've done that :\n");
    my_putstr("-The window is closed using events\n");
    my_putstr("-The program manage the input from the mouse click.\n");
    my_putstr("-The program isanimated sprites rendered thanks");
    my_putstr(" to sprite sheets.\n");
    my_putstr("-The program contain moving elements.\n");
    my_putstr("-The program accept the “-h” option, then display a short ");
    my_putstr("description of the program, and theavailable user inputs.\n");
    my_putstr("-Animations and movements in your program don t depend on the ");
    my_putstr("speed of your computer.\n");
    my_putstr("-Animations and movements in your program are ");
    my_putstr("timed by sfClock elements.\n");
    my_putstr("-The window is stick between 800x600 and 1920x1080 pixels.\n");
    my_putstr("-The window have a limited frame rate .\n");
    my_putstr("-The program display the score of the player .\n\n");
}

int main(int ac, char **av)
{
    backg_t *backg = malloc(sizeof(backg));
    duck_t  *duck = malloc(sizeof(duck_t));
    sfEvent *event = malloc(sizeof(event));
    my_clock_t *time = malloc(sizeof(time));

    if (ac >= 2 && av[1] != NULL) {
        display_usage();
        return (0);
    }
    backg->window = create_my_window(1920, 1080);
    backg = initialise_background(backg);
    duck = initialise_rect(duck);
    time->clock = sfClock_create();
    time->elapsed = 0.0;
    game_loop(backg, duck, event, time);
    sfRenderWindow_destroy(backg->window);
    display_scoreboard(duck);
    return (0);
}
