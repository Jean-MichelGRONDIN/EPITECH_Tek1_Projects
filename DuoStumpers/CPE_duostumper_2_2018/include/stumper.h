/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** header of the prog
*/

#ifndef __STUMPER_H__
#define __STUMPER_H__

#include "./include.h"

enum    default_value {
    WIDTH = 7,
    HEIGHT = 6,
    P_ONE = 'X',
    P_TWO = 'O',
    REFEREE = '#',
};

enum    player {
    ONE = 1,
    TWO = 2,
};

typedef struct  game {
    int width;
    int height;
    char    avatar_one;
    char    avatar_two;
    char    **map;
    char    referee;
} game_t;

int check_left(game_t *game, int line, int col, char c);
int check_top(game_t *game, int line, int col, char c);
int check_top_right(game_t *game, int line, int col, char c);
int check_top_left(game_t *game, int line, int col, char c);

int check_if_four_aligned(game_t *game, int line, int col, char c);
int find_four_aligned(game_t *game);

int nb_free_spaces_on_this_line(char *str);
int nb_free_spaces_in_map(char **map);

int check_end(game_t *game);

game_t  *free_game(game_t *game);

void    print_n_time_this_char(char c, int n);
void    print_n_time_this_str(char *str, int n);
void    print_map(char **map, int width);

game_t *place_char(game_t *game, int number, char c);
int check_user_input(char *str, int width);
game_t  *get_user_input(game_t *game, int player);

int game_loop(game_t *game);

char    **init_map(int width, int height);
game_t  *load_map(game_t *game);

game_t  *load_default_values(game_t *game);

game_t  *load_check_game(int ac, char **av);

int stumper(int ac, char **av);

#endif
