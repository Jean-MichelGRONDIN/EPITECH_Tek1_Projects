/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** prototypes of the project
*/

#ifndef __CIPHER_H__
#define __CIPHER_H__

#include "./include.h"

typedef struct index {
    int rows;
    int cols;
} index_t;

typedef struct msg {
    int **msg;
    int rows;
    int cols;
    char    *str;
} msg_t;

typedef struct key {
    int **matrix;
    float   **res_rev;
    int nb_line;
} code_t;

void    cipher(int ac, char **av);

code_t  *copy_key_in_res_rev(code_t *key);

int *fill_with_special_nb(int *tab, int cols, int x);
int **create_empty_matrix(int lines, int cols);

float   **alloc_identity_matrix(int size);
float   fill_with_identity_number(int i_l, int i_c);
float   **create_identity_matrix(int size);

float   **alloc_float_msg_matrix(int rows, int cols);
float   decrypt_this_number(int *line, int cols, code_t *key, int x);
float   *decrypt_this_line(int *line, int cols, code_t *key, float *res);
void    set_to_int(msg_t *message, float **res);
msg_t   *decrypt_msg(code_t *key, msg_t *m);

void    print_matrix_key(code_t *key);
void    print_matrix_msg(msg_t *m);
void    print_uncrypted_char(msg_t *m, index_t *i);
void    print_matrix_msg_decrypted(msg_t *m);
void    print_identity_matrix(float **matrix, int size);

void    print_matrix_spaces(int i, int line);
void    crypted_msg_spaces(int l, int l_max, int c, int c_max);

void    disp_usage(void);

void    initialise_matrix(int ac, char **av);
index_t *initialise_an_index(int c, int r);
void    encrypt(int ac, char **av);
void    uncrypt(int ac, char **av);

int find_nb_elements(char *str);
int place_crypted_value(char *str, int *i);
int **alloc_and_fill_when_crypted(char *str, int row, int col, int len);
int find_nb_line_msg_matrix(int len, int nb_col);
msg_t   *init_msg_when_crypted(char *s, int nb_cols);

code_t   *initialise_key(char *str);
code_t   *fill_key_matrix(code_t *key, char *str);
int place_characters(char *str, int *i);
int **malloc_int_tab(int **tab, int size);
int find_matrix_size(char *str);

int find_nb_line_for_matrix(int nb_ints, int int_by_line);
int **alloc_msg_matrix(int rows, int cols);
int place_the_value(char *str, int *i);
int **alloc_and_fill_msg_matrix(char *str, int row, int col);
msg_t   *initialise_msg(char *s, int nb_cols);

int do_mul(int *line, int cols, code_t *key, int x);
int *mul_this_line(int *line, int cols, code_t *key, int *res);
int **mul_between_matrix(code_t *key, msg_t *message);

void    divide_this_line_by_tmp(code_t *key, float **idnt, float tmp, int line);
void    processe_to_get_zero(code_t *key, float **idnt, int line, index_t *i);
code_t  *processe_this_columb(code_t *key, float **identity, index_t *i);
code_t  *reverse_the_key_matrix(code_t *key);

#endif
