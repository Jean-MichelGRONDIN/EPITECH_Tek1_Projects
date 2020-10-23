/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** header of the project
*/

#ifndef __TETRIS_H__
#define __TETRIS_H__

#include "./include.h"

typedef struct key_name_list {
    int c;
    char    *str;
} key_name_list_t;


typedef struct args_actions {
    char    letter;
    struct  tetris  *(*func)(struct tetris *t, char **av);
} args_actions_t;


typedef struct tetrimino {
    char    *name;
    int t_width;
    int t_height;
    int t_color;
    char    **shape;
} tetrimino_t;

typedef struct  all_tetriminos {
    struct  tetrimino   *obj;
    struct  all_tetriminos  *next;
    struct  all_tetriminos  *prev;
} tetriminos_t;

typedef struct tetris {
    int level;
    int k_left;
    int k_right;
    int k_turn;
    int k_drop;
    int k_quit;
    int k_pause;
    int m_width;
    int m_height;
    int without_next;
    int debug;
    tetriminos_t *t_list;
} tetris_t;

int get_biggest_tetriminos_width(tetriminos_t *list);
int get_biggest_tetriminos_height(tetriminos_t *list);

tetris_t    *print_tetriminos_list(tetris_t *t);

tetris_t    *launch_game(tetris_t *t);

tetriminos_t    *prev_to_null(tetriminos_t  *list);
tetriminos_t    *remove_part(tetriminos_t *list, tetriminos_t *last,
    tetriminos_t *now, tetriminos_t *after);
tetriminos_t    *remove_that_from_tetriminos_list(tetriminos_t *list,
    tetriminos_t *to_find);
tetriminos_t    *remove_wrong_tetriminos(tetriminos_t *list);

int check_two_time_same_key(char *str, int index);
char    *init_actual_key_list(tetris_t *t);
tetris_t    *check_loaded_keys(tetris_t *t);

tetrimino_t *free_tetrimino_struc(tetrimino_t *obj);
tetriminos_t    *free_tetrimino_list(tetriminos_t * list);

void    ask_a_key_to_continue(void);

tetrimino_t *load_tetrimino_shape(tetrimino_t *obj, char *file);

int check_tetrimino_first_line(char **tab);
tetrimino_t *load_tetrimino_size_and_color(tetrimino_t *obj, char *file);

tetrimino_t *load_this_tetrimino_content(tetrimino_t *obj, char *path);

char    *get_this_tetrimino_name(char *str);

tetriminos_t    *swap_this_one_and_the_next(tetriminos_t *list,
    tetriminos_t *now);
tetriminos_t    *order_tetriminos(tetriminos_t *list);

tetris_t    *load_each_tetriminos(tetris_t *t);

tetriminos_t *add_to_list(tetriminos_t *list, char *full_name);

tetrimino_t *init_tetrimino_struc(void);

tetrimino_t *load_this_tetrimino(tetrimino_t *obj, int debug);

int is_a_tetrimino(char *str);

tetris_t    *find_tetriminos(tetris_t *t, DIR *fd);

tetris_t    *load_tetriminos(tetris_t *t);

key_name_list_t **init_key_name_list(void);
key_name_list_t **free_key_name_list(key_name_list_t **list);
void    identify_and_print_that_one(int v);

char    *is_stic_to_the_opt(char **av);
char    *get_opt_args(char  **av);

tetris_t    *k_quit_load(tetris_t *t, char **av);
tetris_t    *k_pause_load(tetris_t *t, char **av);
tetris_t    *map_size_load(tetris_t *t, char **av);
tetris_t    *without_next_load(tetris_t *t, char **av);
tetris_t    *debug_load(tetris_t *t, char **av);

tetris_t    *level_load(tetris_t *t, char **av);
tetris_t    *k_left_load(tetris_t *t, char **av);
tetris_t    *k_right_load(tetris_t *t, char **av);
tetris_t    *k_turn_load(tetris_t *t, char **av);
tetris_t    *k_drop_load(tetris_t *t, char **av);

args_actions_t  **free_args_action(args_actions_t **list);
args_actions_t  **init_args_action_part_two(args_actions_t **list);
args_actions_t  **init_args_action(void);
tetris_t    *get_that_arg(char **av, tetris_t *t,
    args_actions_t **list, char a);
tetris_t    *load_settings_from_args(char **av, tetris_t *t, char *order);

tetris_t    *free_tetris_struc(tetris_t *t);

tetris_t    *init_prog_args_list(int ac, char **av, tetris_t *t);
tetris_t    *init_from_args(int ac, char **av, tetris_t *t, struct option *op);

tetris_t    *initialise_game_vars(int ac, char **av);

void    print_debug_mode(tetris_t *t);

tetris_t    *init_tetris_with_default_values(void);

void    print_usage(char *str);

int tetris(int ac, char **av);

#endif