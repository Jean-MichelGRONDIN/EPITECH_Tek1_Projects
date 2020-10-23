/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** includes of the prog
*/

#ifndef __MY_LS_H__
#define __MY_LS_H__

#include "./include.h"

int get_l_total(char *path);
void    count_nb_basic_files_for_l_arg(void);

int r_uper_argument(char *path);

void    start_print_time(char *time, int i);
void    print_time_the_l_way(char *time);

void    print_rights(char *name);
void    print_names(char *name);
void    print_last_modif_date(char *name);
void    print_with_l_disposition(char *name);

int l_argument(void);

int flags_finder(char **av);

int is_him_a_usual_file_name(char *name);
void    print_only_usual_names(char *file_name, int nb_time);

void    print_all_files_names(char const *path);

int find_dir_len(char *str);
char    *extract_the_directory(char *fp);

void    basic(char *filepath);

int my_ls(int ac, char **av);

#endif
