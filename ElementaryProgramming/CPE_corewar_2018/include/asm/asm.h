/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** header of this part
*/

#ifndef __ASM_H__
#define __ASM_H__

#include "include.h"
#include "struc.h"
#include "a_list.h"
#include "op.h"

int check_last_quote_place(char *str, int len);

int get_nb_time_this_line(char * const *tab, char const *line);

int check_type_para(char **inst);

int check_nbr_arg_instruction(char **tab);

int check_instruction_exist(char **line);

int verif_label(label_t *label);

int check_called_label(char **tab);

label_t *get_all_label(char **tab);

int check_this_line_instruction(char **tab);
int check_instructions(char **file);

char    ***free_triple_strtab(char ***tab);


int initialise(char *path);

int get_this_line_index(char **tab, char *line);

char    *get_this_line(char * const *tab, char const *line);

int how_many_of_that_char(char *str, char c);

int check_comment_pt_two(char *src, int i);
int check_comment_size(char *str);
int check_comment_place_with_name(char **file);
int check_comment(char **file);

int check_name_pt_two(char *src, int i);
int check_name_size(char *str);
int check_name(char **file);

int check_this_file(char **file);

char    *replace_in_str_part(char *str, char c, char n);
char    *replace_in_str(char *str, char c, char n);

int my_strtab_len_empty_line(char **tab, int len);
char    **copy_without_empty_lines(char **tab, int len);

char    *check_comments_in_this_line(char *str);
char    **clean_comments_lines(char **tab);

char    **clear_strtab_lines(char **tab);

char    **clean_this_file(char **file);

char    **load_this_file_cleanly(char *path);
int get_index(char ***inst, int i);
void    disp_usage(void);

int asm_part(int ac, char **av);
int lunch_asm(char *file_name, char **file);
char *get_new_name(char *str);
int get_new_cor(char *str);
char ***write_header(int cor_file, char **file);
char ***get_all_op(char **file);
char *get_name_coment(char *file);
int get_type_arg(char *str);
int get_dir_size(char **ints, int type, int step);
int get_size_param(char **ints);
int get_size_instruction(char **file);
int get_prog_size(char ***all_op);
typedef struct label_index {
    int idx;
    char *label;
    struct label_index *next;
}label_idx_t;
void    write_prog(int fd, char ***all_op);
int convert_2_10(char *str);
int little_to_big(int nb, int size);
label_idx_t *put_in_list_label_idx(int idx, char *cm,  label_idx_t *my_list);
label_idx_t *get_all_label_rom(char ***all_op);
char *get_binary_conding_byte(char **inst);
void write_coding_byte(int fd, char **inst);
int get_nb_param(char *str, label_idx_t *new, int i, char ***inst);
int check_para(char **arr, int j);
int check_type_para(char **inst);

#endif
