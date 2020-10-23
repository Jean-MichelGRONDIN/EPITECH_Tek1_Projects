/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** prototypes of the project
*/

#ifndef __RUNNER_H__
#define __RUNNER_H__

#include "./include.h"

enum clocks_infinite_mode {
    NB_CLOCK = 2,
    PERSON = 0,
    OBSTACLE_APPEAR = 1,
};

enum player {
    NB_PARTS = 2,
    RUNNER = 0,
    JUMPER = 1,
};

enum background {
    MAX = 3,
    BACK_GROUND = 0,
    MIDDLE_GROUND = 1,
    GROUND = 2,
};

enum obstacles {
    NB_OBS = 10,
    ANCHOR = 0,
    BARREL1 = 1,
    BARREL2 = 2,
    BOMB = 3,
    STEERING_WHEEL = 4,
    STONE1 = 5,
    STONE2 = 6,
    STONE3 = 7,
    STONE4 = 8,
    STONE5 = 9,
};

typedef struct all_ground {
    int activate;
    int type;
    int speed;
    void    (*move)(struct all_ground *texture);
    sfSprite    *sprite;
    sfTexture   *texture;
    sfVector2f  position;
    sfIntRect   rect;
} ground_t;

typedef struct my_clock {
    sfClock *clock;
    sfTime  time;
    float   seconds;
} my_clock_t;

typedef struct map {
    int **map;
    int index;
    int position;
} map_t;

typedef struct index {
    int rows;
    int cols;
} index_t;

typedef struct var_rulers {
    sfMusic   *music;
    sfMusic   *sound;
    int score;
    int lose;
} rulers_t;

void	free_rules(rulers_t *rules);

void	free_this_clock(my_clock_t *time);
void	free_clocks(my_clock_t **time);

void    free_this_ground_struct(ground_t *backg);
void    free_ground_struct(ground_t **backg, int max);

void	free_map(map_t *world);

void	free_internal_variables(sfEvent *event,
    my_clock_t **time, rulers_t *rules);

void    free_args_from_usual(ground_t **backg, ground_t **player,
    ground_t **obstacles, map_t *world);

rulers_t    *init_rulers(void);

void    init_musics(sfMusic *music);

void    destroy_musics(rulers_t *rules);

my_clock_t  **basic_game_actions(sfRenderWindow *window,
    my_clock_t **time, ground_t **backg);

void    receive_events(sfRenderWindow *window,
    ground_t **player, sfEvent *event);

void    game_loop(ground_t **backg, ground_t **player,
    ground_t **obstacles, map_t *world);

ground_t    *do_action_finite(sfRenderWindow *window,
    ground_t *obstacle, rulers_t *rules);
void    obstacle_action_finite(sfRenderWindow *window,
    ground_t **obstacles, map_t *world, rulers_t *rules);
void    place_this_obstacle(sfRenderWindow *window,
    ground_t **obs, map_t *world);
void    is_it_obstacle_time(sfRenderWindow *window,
    ground_t **obstacles, map_t *world, rulers_t *rules);


int **alloc_2d_array_of_obstacles(int nb);

int find_nb_obstacles(char *map);
int **creat_obstacles_map(char *map);

int check_18_first_char(char *map);
int check_if_there_is_not_second_too_close(char c, char *map, int i);
int check_char_by_char(char *map);
int check_map_conditions(char *map);

int **init_map_from_file(char *filepath);

int load_map_from_file(char *filepath);

void    display_the_usage(void);

void    final_window(sfRenderWindow *window, sfEvent *event, rulers_t *rules);

void    print_lose_or_win(sfRenderWindow *window,
    int cols, int line, rulers_t *rules);
void    print_finale_screen(sfRenderWindow *window, rulers_t *rules);

int my_intlen(int nb);
char    *int_to_str(int nb);

void    display_default_msg(sfRenderWindow *window, int cols, int line);
void    display_score_msg(sfRenderWindow *window, int cols ,
    int line, rulers_t *rules);
void    display_real_time_score(sfRenderWindow *window,
    int x, int y, rulers_t *rules);

void    display_score(void);

void    do_he_touch_that(ground_t *player, ground_t *obstacle,
    rulers_t *rules);
void    do_him_touch_the_obstacles(ground_t *player,
    ground_t **obstacles, rulers_t *rules);

ground_t    *do_action(sfRenderWindow *window,
    ground_t *obstacle, int *end, rulers_t *rules);
void    obstacle_action(sfRenderWindow *window,
    ground_t **obstacles, int *end, rulers_t *rules);
void    choose_an_obstacle_and_place_it(sfRenderWindow *window,
    ground_t **obstacles);
void    is_it_obstacle_time_infinite(sfRenderWindow *window,
    ground_t **obstacles, my_clock_t **time, rulers_t *rules);

int nb_alea(int a, int b);

ground_t    *init_stone1(ground_t *stone);
ground_t    *init_stone2(ground_t *stone);
ground_t    *init_stone3(ground_t *stone);
ground_t    *init_stone4(ground_t *stone);
ground_t    *init_stone5(ground_t *stone);

ground_t    *init_anchor(ground_t *anchor);
ground_t    *init_barrel1(ground_t *barrel);
ground_t    *init_barrel2(ground_t *barrel);
ground_t    *init_bomb(ground_t *bomb);
ground_t    *init_wheel(ground_t *wheel);

ground_t    **initialise_all_obstacles(void);

void    player_animation(sfRenderWindow *window,
    ground_t **player, my_clock_t **time);

my_clock_t  **get_all_times(my_clock_t **time);

my_clock_t *get_time(my_clock_t *time);

my_clock_t  **init_all_clocks_infinite_mode(void);

my_clock_t  *init_this_clock(void);

ground_t    *init_runner_part(ground_t *runner);

void    jump_management(ground_t *runner);
void    move_player(ground_t *runner);

ground_t    **initialise_all_players_object(void);

void    user_actions(sfRenderWindow *window, ground_t *player,
    sfEvent *event);

void    move_all_grounds(sfRenderWindow *window, ground_t **backg);

void    move_ground(ground_t *ground);

void    window_action(sfRenderWindow *window);

ground_t    *init_back_ground(ground_t *backg);
ground_t    *init_middle_ground(ground_t *middleg);
ground_t    *init_ground(ground_t *ground);

ground_t    **initialise_all_grounds(void);

sfRenderWindow  *create_my_window(int wid, int heig, int fps);

void    game_loop_infinite(ground_t **backg,
    ground_t **player, ground_t **obstacles);

void    launch_game_infinite_mode(void);

int runner(int ac, char **av);

#endif
