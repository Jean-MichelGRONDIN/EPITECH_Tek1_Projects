/*
** EPITECH PROJECT, 2019
** PSU_minishell_2018
** File description:
** header of the project
*/

#ifndef __MINISHELL_H__
#define __MINISHELL_H__

#include "./include.h"

typedef struct commands {
    char    *name;
    char    **(*exec)(char **my_env, char **args);
} command_t;

int check_if_nothing_in_the_str_v2(char *str);

void    signal_check(int sig);

char    **single_pipe_redirection(char **env, char **tab, char *str);

int file_creator_simple_redirection(char *path, int nb);
int double_left_redirection(char *cmp);
char    **do_redirections(char **env, char **cms, int n);
char    **check_redirections_syntax(char **env, char **tab, char *str);

int check_if_this_is_a_directory(char *path);

char    **do_commandes_redirections(char **env, char *str);

char    **separate_all_commands(char **env, char *str);

int check_if_this_char_is_number(char c);
int check_if_this_char_is_letter(char c);
int check_first_char_of_this_setenv(char c);
int check_all_other_chars_of_this_setenv(char *str);
int check_setenv_obj_name_syntax(char *str);

char    **cd_return_in_past(char **env);

int do_this_str_have_slash(char *str);

int check_if_nothing_in_the_str(char *str);

int check_if_there_is_only_exit_allowed_chars(char *str);

int do_there_is_a_dot(char *str);

void    check_exit_syntaxe(char *str);

char    **my_exit_shell(char **env, char **args);

char    **put_that_in_env(char **env, char *obj, char *str);

char    **go_to_the_user_home(char **env);

char    **try_go_in_this_path(char **env, char *path);

int init_path_before_launch_researsh_pipe(char **env, char **args);
int init_path_before_launch_researsh(char **env, char **args);

char    **copy_the_env_after_unset(char **env, int nb);

char    **remove_this_from_the_env(char **env, char *str, int *nb_time);

char    **already_exist_or_new(char **env, char **args, char *obj);

char    **add_this_to_the_env(char **env, char *to_add);

char    **do_my_command(char **env, char **args);

int is_this_one_of_my_commands(char **args);

command_t   *give_list_of_knowed_functions(void);

char    **my_unset_env(char **env, char **args);

char    **my_set_env(char **env, char **args);

char    **print_env(char **env, char **args);

char    **my_cd(char **env, char **args);

int identify_the_input_pipe(char **env, char *input);
char    **identify_the_input(char **env, char *input);

char    **free_searsh_vars(char **args, char **path);

int exec_this_prog_pipe(char **args, char **env);
int exec_this_prog(char **args, char **env);

int try_to_launch_this_pipe(char *str, char **args, char **my_env);
int try_to_launch_this(char *str, char **args, char **my_env);

int do_him_exist(char *str);

int searsh_this_command_in_path_pipe(char **my_env, char **args, char **path);
int searsh_this_command_in_path(char **my_env, char **args, char **path);

char    *get_input(void);

int find_position_of_that_in_env(char **env, char const *obj);

char    **copy_the_env(char **env);

int initialise(char **env);

int minishell(int ac, char **av, char **env);

#endif
