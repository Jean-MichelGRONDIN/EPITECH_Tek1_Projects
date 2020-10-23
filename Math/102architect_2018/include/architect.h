/*
** EPITECH PROJECT, 2018
** 102achitect_2018
** File description:
** file h of the prog
*/

#ifndef __ARCHITECT_H__
#define __ARCHIETCT_H__

typedef struct matrix {
    float x;
    float y;
    float z;
} matrix_t;

matrix_t    *create_matrix_basic(float x, float y);
matrix_t    *create_matrix_simple_empty(void);
matrix_t    *create_matrix_empty(void);
matrix_t    *create_matrix_transla(float x, float y);
matrix_t    *create_matrix_scal(float x, float y);
matrix_t    *create_matrix_rotation(float x);
matrix_t    *create_matrix_reflexion(float degree);

matrix_t    *calc_basic_and_3_3_matrix(matrix_t *two, matrix_t *one);
matrix_t    *calc_between_3_3_matrix(matrix_t *one, matrix_t *two);
void    put_to_finale_form(matrix_t *mat);

void    print_matrix_basic(matrix_t *mat);
void    print_matrix(matrix_t *mat);
void    print_result(int x, int y, matrix_t *mat);
void    print_usage(void);

matrix_t    *find_params(matrix_t *res, int ac, char **av);
matrix_t    *pattern_finder(matrix_t *res, char **av, int *i);
matrix_t    *creat_first_matrix(char **av, int *i);
matrix_t    *matrix_multiplication(matrix_t *res, char **av, int *i);
void    architect(int ac, char **av);

void    check_args(int ac, char **av);

int my_str_isnum(char const *str);
char    *my_strdup(char const *src);
int my_strlen(char const *str);
void    my_putchar(char c);

matrix_t    *create_a_transla(char **av, int *i);
matrix_t    *create_a_scal(char **av, int *i);
matrix_t    *create_a_rotation(char **av, int *i);
matrix_t    *create_a_reflexion(char **av, int *i);

matrix_t    *mult_by_a_transla(matrix_t *mat, char **av, int *i);
matrix_t    *mult_by_a_scal(matrix_t *mat, char **av, int *i);
matrix_t    *mult_by_a_rotation(matrix_t *mat, char **av, int *i);
matrix_t    *mult_by_a_reflexion(matrix_t *mat, char **av, int *i);

#endif
