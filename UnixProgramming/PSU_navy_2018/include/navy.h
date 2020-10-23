/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** header of the project
*/

#ifndef __NAVY_H__
#define __NAVY_H__

#include "./include.h"

typedef struct  ship_position {
    char    a;
    char    b;
    char    line;
    char    number;
} ship_pos_t;

typedef struct  transfer {
    int a;
    int b;
    int pid;
    int activate;
} transfer_t;

transfer_t  data;

int check_user_attack(char *str);

char    **update_enemy_map(char **map, char *data, int res);

int wait_answer(char *attack);

int send_this_to_enemy(int n);

char    *get_user_attack(void);

char    **my_turn(char **map);

int count_x_on_that_line(char *str);
int is_this_map_over(char **map);
int is_this_the_end(char **map, char **enemy);

char    **update_my_map(char **map, char *data);

void    answer_the_enemy(char res);

int check_if_touched(char **map, char *data);

int wait_an_input(void);

char    **wait_enemy(char **map);

int game_loop_player_one(char **me, char **enemy);

int game_loop_player_two(char **me, char **enemy);

void    check_for_spaces(char *map);
void    print_this_map(char **map);
void    print_maps(char **map, char **enemy);

int connect_to_enemy(int ac);

char    **place_line(char **map, ship_pos_t *pos);
char    **place_column(char **map, ship_pos_t *pos);
char    **place_ship(char **map, ship_pos_t *pos);
char    **place_that_ship(char **map, char **ship);

char    **fill_the_map_with_pos(char **map, char **pos);

char    **init_empty_map(void);

int launch_game(int ac, char **pos);

char    *load_ships_value(char **map);

void    print_usage(void);

int check_if_there_is_again_the_same(char *ships, int pos);
int check_two_time_same_ships(char *ships);

int check_map_invalid_ship_number(char **map);

int check_map_invalid_pos(char **line);

int check_simple_map_errors(char **map, char **line);
int map_errors(char **map);

int pid_errors(void);

char    **load_map(char *path);

void    init_global(void);
int initialise(int ac, char **av);

void    receive_connection(int sig, siginfo_t *sinfo, void *info);

void    connect_first_player(int sig, siginfo_t *sinfo, void *info);

void    init_connect_first_player_sigaction(void);
int first_player(void);

void    init_receive_connection_sigaction(void);
int second_player(void);

void    init_basic_sigaction_usr_2(void);
void    basic_sig_usr_2(int sig, siginfo_t *sinfo, void *info);

void    init_basic_sigaction_usr_1(void);
void    basic_sig_usr_1(int sig, siginfo_t *sinfo, void *data);

int navy(int ac, char **av);

#endif
