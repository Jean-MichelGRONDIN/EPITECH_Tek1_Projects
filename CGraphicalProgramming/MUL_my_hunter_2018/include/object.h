/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** struct and proto of the project
*/

#ifndef __OBJECT_H__
#define __OBJECT_H__

typedef struct duck_variables {
    sfTexture   *texture;
    sfSprite    *sprite;
    sfVector2f  position;
    sfIntRect rect;
    int speed;
    int deaths;
} duck_t;

typedef struct background_variables {
    sfTexture   *texture;
    sfSprite    *sprite;
    sfRenderWindow  *window;
} backg_t;

typedef struct my_clock {
    sfClock *clock;
    sfTime  time;
    float   seconds;
    float   elapsed;
} my_clock_t;

int nb_alea(int a, int b);
sfRenderWindow  *create_my_window(int wid, int heig);
duck_t  *deplace_my_duck(duck_t *duck, my_clock_t *time);
void    manage_mouse_click(sfMouseButtonEvent event,
    duck_t *duck, my_clock_t *time);
void    analyse_events(sfRenderWindow *window, sfEvent *event,
    duck_t *duck, my_clock_t *time);
duck_t  *initialise_rect(duck_t *duck);
duck_t  *set_new_img_square(duck_t *duck, my_clock_t *time);
void    display_scoreboard(duck_t *duck);
backg_t *initialise_background(backg_t *backg);
void    window_action(sfRenderWindow *window);
duck_t  *duck_action(duck_t *duck, sfRenderWindow *window, my_clock_t *time);
my_clock_t *get_time(my_clock_t *time);
void    game_loop(backg_t *backg, duck_t *duck,
    sfEvent *event, my_clock_t *time);

#endif
