/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** central haeder of the prog
*/

#ifndef __MY_NORM_H__
#define __MY_NORM_H__

#include "./include.h"

#define COLOR_RED "\x1b[1;31m"
#define COLOR_GREEN "\x1b[1;32m"
#define COLOR_MAGENTA "\x1b[1;35m"
#define COLOR_YELLOW "\x1b[1;33m"
#define COLOR_RESET "\x1b[0m"

typedef struct file {
    char    *name;
    char    *path;
    char    type;
    struct  file    *next;
} file_t;

void    check_line_header_comment(char **tab, int line, file_t *files);
void    check_comment_in_headers(char **tab, file_t *files);

void    there_is_comment_on_this_line(char **tab, int line, file_t *files);
void    check_if_comment_inside_this_function(char **tab, int line, file_t *files);
void    check_comment_inside_a_function(char **tab, file_t *files);

void    check_nb_functions_in_a_file(char **tab, file_t *files);

char    **give_all_functions_i_know(void);
char    *cmp_with_all_functions_and_return(char *str);
int cmp_with_all_functions_i_know(char *str);
int check_that_string_functions(char **tab, int line, int c);
int do_there_is_braket(char **tab, int line, int c);
void    check_this_line_functions(char **tab, int line, file_t *files);
void    check_functions(char **tab, file_t *files);

int cmp_massique(char *str);
int check_that_string_call(char **tab, int line, int c);
int do_there_is_space_before_braket(char **tab, int line, int c);
void    check_call_on_this_line(char **tab, int line, file_t *files);
void    check_while_for_if_return_space_before_braket(char **tab,
    file_t *files);

void    check_equal_of_this_line(char *str, file_t *files, int line);
void    check_equal(char **file, file_t *files);

void    check_spaces_at_end_of_lines(char **tab, file_t *files);

int there_is_dot_comma_before_braket(char **tab, int line);
int there_is_open_brackets(char **tab, int line);
int is_a_function(char **tab, int line);
int something_before(char *str, int i);
int is_a_valid_hook(char *str, int i);
int is_this_function_hook(char  *str, int *nb_hook);
void    check_nb_lines_of_this_function(char **tab, int line, file_t *files);
void    check_function_nb_lines(char **lines, file_t *files);

void    check_comma_of_this_line(char *str, file_t *files, int line);
void    check_comma(char **file, file_t *files);

void    print_msg_header(file_t *files);
void    check_header(char **lines, file_t *files);

int find_nb_first_spaces(char *str);
int there_is_only_spaces(char *str);
void    check_indentation(char **file, file_t *files);

void    is_there_a_tab(char *str, int line, file_t *files);
void    check_tabulation(char **file, file_t *files);

void    check_limite_char_by_line(char **file, file_t *files);

char    **get_what_that_file_contain(char *path);

void    file_h_norm(file_t *files);

void    file_c_norm(file_t *files);

void    check_that_file(file_t *files);

int check_the_arg(char *path);

int launch_the_norm_checker(char *path);

int initialise(char *arg);

char    **give_avoided_list(void);

int is_this_to_avoid(char *name);

file_t *add_to_list(char *name, char *dir, char type, file_t *files);

char    find_type_of_file(char *name);

file_t  *see_if_it_is_counted(char *name, char *dir, file_t *files);

int is_a_file(char *name, char *dir);

file_t  *check_res_of_readdir(char *directory, file_t *files,
    struct dirent *dirp);

int is_this_an_allowed_obj(char *obj);

file_t  *find_all_files(char *directory, file_t *files);

void    disp_usage(void);

int my_norm(int ac, char **av);

#endif
