/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_2018
** File description:
** prototype file for the bootstrap
*/

#ifndef _BOOTSTRAP_H_
#define _BOOTSTRAP_H_

typedef struct position {
    char    **map;
    char    *str;
    int x;
    int y;
    int x_max;
    int y_max;
} position_t;

typedef struct resultat {
    int row;
    int col;
    int size;
} res_t;

typedef struct index {
    int rows;
    int cols;
} index_t;

int fs_open_file(char const *filepath);
char    *load_file_in_mem(char const *filepath);
int set_at_map(char const *str);
char    **load_2d_arr_from_file(position_t *position);
int is_square_of_size(position_t *position, index_t *index, int square_size);
position_t  *draw_the_square(position_t *position, res_t *res);
void    array_2d_disp(char **arr);
int first_map_line_len(char const *str);
position_t  *initialise_position(char const *filepath);
int try_each_size(position_t *position, index_t *index);
res_t   *is_him_the_bigger(res_t *res, index_t *index, int his_size);
res_t   *initialise_res(int x, int y, int size);
index_t *initialise_index(int x, int y);
void    find_bsq(position_t *position);
void    col_size_errors(position_t *position);
void    bsq(char const *filepath);
char    **mem_alloc_2d_array(int nb_rows, int nb_cols);
void    c_filter(char c);
void    free_position(position_t *position);
void    free_index(index_t *index);
void    free_res(res_t *res);

#endif
