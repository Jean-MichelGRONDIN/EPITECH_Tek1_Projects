/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** headers of the project
*/

#ifndef __MY_DEFENDER_H__
#define __MY_DEFENDER_H__

#include "./include.h"

enum construct {
    GENERATOR = 31,
    BASIC_TOWER = 32,
    FROZEN_TOWER = 33,
    WALL = 34,
    HELP = 35,
};

enum stage {
    MENU = 1,
    GAME = 2,
    CLOSE = 0,
};

enum type {
    STRUCT = 100,
    ENEMY = 101,
    BACKGROUND = 102,
    GARDEN = 103,
    TOOLBAR = 104,
    ATTACK = 105,
    MONEY = 106,
};

enum state {
    DEAD = 0,
    ALIVE = 1,
    WAITING = 2,
    ACTIVATE = 3,
    OCCUPED = 4,
    FREE = 5,
};

enum rules_state {
    YES = 51,
    NO = 52,
};

typedef struct my_clock {
    sfClock *clock;
    sfTime  time;
    float   seconds;
} my_clock_t;

typedef struct object {
    int type;
    int state;
    int speed;
    int max;
    int hp;
    int dmg;
    int price;
    float   delay;
    float   spawn;
    float   attack_delay;
    sfSprite    *sprite;
    sfTexture   *texture;
    sfVector2f  pos;
    sfIntRect   part;
    sfFloatRect rect;
    my_clock_t *anim;
    my_clock_t *attack;
}  obj_t;

typedef struct struct_list {
    int type;
    obj_t  *(*init)(sfVector2f garden);
} struct_list_t;

typedef struct  linked_list {
    obj_t   *obj;
    struct  linked_list *next;
} list_t;

typedef struct important_variables {
    int pressed;
    int money;
    int choice;
    int selected;
    float   spawn_delay;
    my_clock_t  *global_time;
    sfMusic *music;
    sfMusic *hit;
    sfMusic *plop;
} rules_t;

void    disp_mandatory(void);
void    disp_must(void);
void    disp_should(void);
void    disp_usage(void);

int get_number_of_enemies(list_t *list);
rules_t *is_it_win(sfRenderWindow *window,
    list_t *list, rules_t *rules);

int get_price(int type);

list_t  *display_money(list_t *list, rules_t *rules, sfRenderWindow *window);

obj_t   *init_sun_money(void);

int event_of_pause_print_screen_window(sfRenderWindow *window,
    sfEvent *event);
void    pause_and_print_this_screen(sfRenderWindow *window, char *path);

obj_t   *init_help_button(void);
list_t  *check_of_gardens_are_empty(list_t  *list, list_t *save);

list_t  *zombie_damage_management(list_t *save, list_t *list);

list_t  *attack_damage_management(list_t *save,
    list_t *list, rules_t *rules);

int collision_detector(list_t *one, list_t *two);

obj_t   *init_pause_play_button(void);
obj_t   *init_pause_exit_button(void);
obj_t   *init_pause_menu_button(void);
obj_t   **init_pause_menu_buttons(void);

int did_him_press_pause_menu(sfVector2i m_pos, obj_t *bt);
int did_him_press_pause_play(sfVector2i m_pos, obj_t *bt);
int did_him_press_pause_exit(sfVector2i m_pos, obj_t *bt);
int analyse_pause_event(sfEvent *event, obj_t **buttons, sfVector2i m_pos);
int pause_menu_events(sfRenderWindow *window, sfEvent *event,
    obj_t **buttons, sfVector2i m_pos);

obj_t   *manage_pause_menu_button(obj_t *bt, sfVector2i m_pos);
void    draw_pause_menu_sprites(sfRenderWindow *window, obj_t **buttons);
int pause_menu(sfRenderWindow *window);

list_t  *manage_attack(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules);

obj_t   *init_basic_attack_extended(obj_t *struc, obj_t *parent);
obj_t   *init_basic_attack(obj_t *parent);
obj_t   *init_frozen_attack_extended(obj_t *struc, obj_t *parent);
obj_t   *init_frozen_attack(obj_t *parent);

obj_t   *init_attack(obj_t *parent);

rules_t *when_too_far_you_loose(sfRenderWindow *window, rules_t *rules);
list_t  *zombie_attack(list_t *list, list_t *tmp);
list_t  *manage_zombie(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules);

list_t  *init_n_zombie_for_this_wave(list_t *list, int nb, rules_t *rules);
list_t  *is_it_time_for_next_wave(rules_t *rules, list_t *list);
list_t  *global_time_and_wave_management(rules_t *rules, list_t *list);

sfVector2f  get_zombie_position(int nb);
list_t  *init_zombies(list_t *list, int *id, rules_t *rules, float when);

obj_t   *init_basic_zombie_extended(obj_t *struc, sfVector2f here);
obj_t   *init_basic_zombie(sfVector2f here, float now);

obj_t   *init_frozen_extended(obj_t *struc, sfVector2f here);
obj_t   *init_frozen(sfVector2f here);
obj_t   *init_wall_extended(obj_t *struc, sfVector2f here);
obj_t   *init_wall(sfVector2f here);

list_t  *manage_struct(list_t *list, sfRenderWindow *window, rules_t *rules);

obj_t   *init_sunflower_extended(obj_t *struc, sfVector2f here);
obj_t   *init_sunflower(sfVector2f here);
obj_t   *init_basic_tower_extended(obj_t *struc, sfVector2f here);
obj_t   *init_basic_tower(sfVector2f here);

struct_list_t   **init_the_struct_list(void);
obj_t   *init_this_struct(int type, sfVector2f garden);

rules_t *free_rules(rules_t *rules);

rules_t *manage_events(sfRenderWindow *window, sfEvent *event, rules_t *rules);
rules_t *check_events(sfRenderWindow *window, sfEvent *event, rules_t *rules);

rules_t *init_rules(void);

list_t  *toolbar_management(list_t *list,
    sfRenderWindow *window, rules_t *rules);

obj_t   *manage_plant_button(obj_t *btt, sfVector2i m_pos,
    rules_t *rules, sfRenderWindow *window);

obj_t   *init_frozenplant_button(void);
obj_t   *init_sunplant_button(void);
obj_t   *init_murplant_button(void);
obj_t   *init_plantplant_button(void);
list_t  *init_plant_buttons(list_t  *list);

list_t  *garden_management(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules);

list_t  *obj_management(list_t *list, list_t *tmp,
    sfRenderWindow *window, rules_t *rules);

list_t  *obj_actions(list_t *list, sfRenderWindow *window, rules_t *rules);

obj_t   *init_garden_rect(obj_t *garden, int height, int width);
list_t  *add_this_garden(list_t *list, int height, int width);

list_t  *init_all_grounds(void);

list_t  *init_all_gardens_spaces(list_t *list);

list_t  *free_this_list_elem(list_t *list);

list_t  *free_all_the_list(list_t *list);

list_t  *remove_that_from_list(list_t *list, list_t *to_remove);

list_t  *add_obj_to_list(obj_t *to_add, list_t *list);

int game_loop(sfRenderWindow *window);

void    waiting_screen(sfRenderWindow *window);

my_clock_t *get_time(my_clock_t *time);

my_clock_t  *init_this_clock(void);

obj_t   **free_this_obj_arr(obj_t **obj, int n);

obj_t   *free_this_obj(obj_t *obj);

void    did_him_press_credit_or_how_to_play(sfRenderWindow *window,
    sfVector2i m_pos, obj_t **bt);
int did_him_press_play(sfVector2i m_pos, obj_t *bt);
int did_him_press_exit(sfVector2i m_pos, obj_t *bt);
int analyse_event(sfRenderWindow *window,
    sfEvent *event, obj_t **buttons, sfVector2i m_pos);
int menu_events(sfRenderWindow *window, sfEvent *event,
    obj_t **buttons, sfVector2i m_pos);

obj_t   *manage_button(obj_t *bt, sfVector2i m_pos);

obj_t   *init_play_button(void);
obj_t   *init_exit_button(void);
obj_t   *init_logo_menu(void);
obj_t   **init_menu_buttons(void);

obj_t   *init_this_background(char *path);

void    draw_menu_sprites(sfRenderWindow *window,
    obj_t *background, obj_t **buttons, obj_t *logo);
obj_t   **manage_all_buttons(sfVector2i mouse_pos, obj_t **buttons);
int menu_window(sfRenderWindow *window);

int launcher_loop(void);

void    window_action(sfRenderWindow *window);

sfRenderWindow  *create_my_window(int wid, int heig, int fps);

int my_defender(int ac, char **av);

#endif
