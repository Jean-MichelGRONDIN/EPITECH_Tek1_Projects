/*
** EPITECH PROJECT, 2019
** PSU_minishell_2018
** File description:
** header of the project
*/

#ifndef __MINISHELL_H__
#define __MINISHELL_H__

#include "./include.h"

#define CRS "\x1B[0m"
#define CBOLD "\x1B[1m"
#define CCYAN "\x1B[96m"

typedef struct s_st
{
    char **env;
    char **args;
    char *pwd;
}st_t;

typedef struct commands {
    char    *name;
    char    **(*exec)(st_t st);
} command_t;

typedef struct ptr_fonction
{
    int cmp;
    void (*ptr_fonction)(char *);
} p_f_t;

int check_this_tab(char **tab);

char    **add_this_to_the_env(st_t st, char *to_add);
char    **already_exist_or_new(st_t st, char *obj);
char    **and_redirection(st_t st, char **tab);
char    **check_and_redirection(st_t st, char **tab, char *str);
char **cat_these_arrays(char **array1, char **array2);
char **array_cat(char **array1, char **array2);
char **builtin_alias(st_t st);
char    **cd_return_in_past(st_t st);
void    check_exit_syntaxe(char *str);
int check_if_there_is_only_exit_allowed_chars(char *str);
int check_if_this_is_a_directory(char *path);
int check_if_nothing_in_the_str(char *str);
int check_if_nothing_in_the_str_v2(char *str);
int check_setenv_obj_name_syntax(char *str);
int check_all_other_chars_of_this_setenv(char *str);
int check_first_char_of_this_setenv(char c);
int check_if_this_char_is_letter(char c);
int check_if_this_char_is_number(char c);
char    **copy_the_env_after_unset(st_t st, int nb);
char    **copy_the_env(char **env);
char    **do_commandes_redirections(st_t st, char *str);
char    **do_command_redirections_pt_redirections(st_t st,
    char **tab, char *redirection);
int do_him_exist(char *str);
char    **do_my_command(st_t st);
int do_there_is_a_dot(char *str);
int do_this_str_have_slash(char *str);
char    **double_pipe(st_t st, char **tab);
int exec_this_prog(st_t st);
int exec_this_prog_pipe(st_t st);
int find_position_of_that_in_env(char **env, char const *obj);
char    *get_input(void);
command_t   *give_list_of_knowed_functions(void);
char *give_me_this_in_env(char **env, char *arg);
char    **go_to_the_user_home(st_t st);
char    **identify_the_input(st_t st, char *input);
int identify_the_input_pipe(st_t st, char *input);
int initialise(char **env);
int init_path_before_launch_researsh(st_t st);
int init_path_before_launch_researsh_pipe(st_t st);
int is_this_in_my_aliases(st_t *st);
int is_this_one_of_my_commands(st_t st);
int minishell(int ac, char **av, char **env);
char **my_arraydup(char **array);
int my_array_height(char **array);
char    **my_cd(st_t st);
char    **my_exit_shell(st_t st);
char    **my_set_env(st_t st);
char    **my_unset_env(st_t st);
char    **print_env(st_t st);
void print_prompt(void);
char    **put_that_in_env(st_t st, char *obj, char *str);
char    **check_redirections_syntax(st_t st, char **tab, char *str);
char    **do_redirections(st_t st, char **cms, int n);
int double_left_redirection(char *cmp);
int file_creator_simple_redirection(char *path, int nb);
char    **remove_this_from_the_env(st_t st, char *str, int *nb_time);
int searsh_this_command_in_path(st_t st, char **path);
int searsh_this_command_in_path_pipe(st_t st, char **path);
char    **separate_all_commands(st_t st, char *str);
void    signal_check(int sig);
char    **check_simple_pipe_redirection(st_t st, char **tab, char *str);
char    **single_pipe_redirection(st_t st, char **tab);
void    single_pipe_redirection_part_two(int save_zero, int *n_wait, int *fd);
char    **try_go_in_this_path(st_t st, char *path);
int try_to_launch_this(char *str, st_t st);
int try_to_launch_this_pipe(char *str, st_t st);
char **globals(st_t st);
void func_dete(char c);
char *str_cat(char **av, int x);
void my_pre_putstr_e(char *str);
void my_pre_putstr_e_n(char *str);
void my_pre_putstr_n(char *str);
void my_pre_putstr(char *str);
char **echo_start(st_t st);
void write_end_of_file(char *str, char *file_path);
void write_alias_in_file(char **alias, char *file_path);
char **args_changing(st_t st);
char *(char *cmd_input, char *cmd_histo);

#endif
