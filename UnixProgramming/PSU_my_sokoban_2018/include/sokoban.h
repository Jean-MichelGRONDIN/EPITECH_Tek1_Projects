/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** prototype of the prog
*/

#ifndef __SOKOBAN_H__
#define __SOKOBAN_H__

#include "./includes.h"

typedef struct index {
    int cols;
    int rows;
} index_t;

typedef struct world {
    int x;
    int y;
    int y_max;
    int *line_len;
    char    *str;
    char    **map;
    int nb_o;
    int **o_pos;
    int nb_x;
    int **x_pos;
} world_t;

int find_nb_lines(char *str);
int *find_lines_len(int nb_line, char *str);
world_t *find_lenght(world_t *world);
char    **alloc_2d_tab(int y_max, int *line_len);

void    c_filter(char c);

void	check_nb_of_p(char *str);
void    check_nb_errors(int x, int o);
void    check_objects_errors(world_t *world);

void    create_win(void);

void    print_usage(void);
void    print_map(world_t *world);
void    print_win(void);
void    print_lose(void);
void    print_end(int x);

world_t *free_the_map(world_t *world);

int fs_open_file(char const *filepath);

void    game_loop(world_t *world);

index_t *initialise_index(void);
int is_here_a_player(char *str);
world_t *find_player_position(world_t *world);
world_t *reset_the_map(world_t *world);
world_t *initialise_the_map(char const *filepath);

int is_it_finished(world_t *world);

int can_it_block(char c);
int is_x_blocked(world_t *world, int i);
int is_it_lose(world_t *world);

int is_it_win(world_t *world);

char    *load_file_in_mem(char const *filepath);
char    **load_2d_arr_from_file(world_t *position);

world_t *manage_entrie(world_t *world, int ch);

int can_move_x(char s);
world_t *go_up(world_t *w);
world_t *go_down(world_t *w);
world_t *go_left(world_t *w);
world_t *go_right(world_t *w);

int find_nb_of_o(char *str);
int is_here_a_o(char *str, int *i);
int **malloc_o_position(int **position, int size);
world_t *find_o_position(world_t *world, int i, int colomb);
world_t *check_all_o(world_t *world);

int sokoban(int ac, char **av);

int find_nb_of_x(char *str);
int is_here_a_x(char *str, int *i);
int **malloc_x_position(int **position, int size);
world_t *find_x_position(world_t *world, int i, int colomb);

#endif
