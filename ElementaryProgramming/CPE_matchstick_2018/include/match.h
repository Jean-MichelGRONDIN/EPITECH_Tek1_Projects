/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** header of the project
*/

#ifndef __MATCH_H__
#define __MATCH_H__

#include "./include.h"

enum player {
    USER = 1,
    AI = 2,
};

typedef struct input {
    int rows;
    int nb;
} input_t;

typedef struct maps {
    char    *nb_sticks;
    int remove_max;
    int nb_line;
} map_t;

int find_the_line_not_empty_by_counting(map_t *map, int line);

int find_lefted_lines(map_t *map);

void    display_usage(void);

int check_to_end_player_turn(int check, input_t *input,
    map_t *map, char *user_inp);

int find_who_win(int player);

map_t   *modify_the_map(input_t *input, map_t *world);

input_t    *ai_turn(input_t *input, map_t *map);

int nb_alea(int a, int b);

int check_nb_matches(int nb, int line, map_t *map);

int check_input_matches(char *input, map_t *map, int line);

int check_input_line(char *input, map_t *map);

input_t *player_turn(input_t *input, map_t *map);

char    *free_cleanly_this_string(char *str);

char    *get_input(void);

int is_it_over(char *sticks, int nb_line);

int game_loop(map_t *map);

void    say_what_happened_last_turn(input_t *input, int player);

input_t *init_input_struct(int number, int row);

void    print_this_line(int nb_places, int line, int nb_stick);
void    display_game_board(int nb_line, char *sticks_by_line);

char    *init_nb_sticks_by_line(int nb_line);

void    print_n_time_this_char(int n, char c);

int initialise(char **av);

int check_args_are_integers(int ac, char **av);

int matchstick(int ac, char **av);

#endif
