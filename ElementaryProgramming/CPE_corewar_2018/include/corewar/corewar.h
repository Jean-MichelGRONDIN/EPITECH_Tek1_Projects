/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** header of this part
*/

#ifndef __COREWAR_H__
#define __COREWAR_H__


#include "../global/include.h"
#include "../global/struc.h"
#include "../corewar/corewar_list.h"

char    *get_next_prog_name(int ac, char **av, int *index);

int get_prog_adress_arg_champ_list_value(champ_arg_list_t *list,
int ac, char **av, int *index);
champ_arg_list_t    *prog_adress_pt_two(champ_arg_list_t *list,
int ac, char **av, int *index);
champ_arg_list_t    *prog_adress_arg_champ_list(champ_arg_list_t *list,
int ac, char **av, int *index);

int get_prog_number_arg_champ_list_value(champ_arg_list_t *list,
int ac, char **av, int *index);
champ_arg_list_t    *prog_number_pt_two(champ_arg_list_t *list,
int ac, char **av, int *index);
champ_arg_list_t    *prog_number_arg_champ_list(champ_arg_list_t *list,
int ac, char **av, int *index);

champ_arg_list_t    *dump_arg_champ_list(champ_arg_list_t *list,
int ac, char **av, int *index);

champ_arg_list_t    *load_champ_args(int ac, char **av);

int find_nb_dump_in_av(int ac, char **av);
int find_dump_pos_in_av(int ac, char **av);
int get_dump_number(int ac, char **av, int n);
int load_dump_cycle_opt(int ac, char **av);

champ_arg_list_t    *free_arg_champ_list(champ_arg_list_t *list);

champ_arg_list_t    *add_to_arg_champ_list(char *c_name,
int c_number, int c_adress, champ_arg_list_t *list);

void    disp_usage(void);

int corewar(int ac, char **av);
champion_t *get_ram(champ_arg_list_t *list, int *pos, char *ram);
int lunche_corwar(champion_t *new, char *ram);
action_t *init_action(void);
char *convert_10_2(int nb);
int get_value(char **map_byte, champion_t *actu, int i, int *next);
int get_spe_value(char **map_byte, champion_t *actu, int i, int *next);
void put_in_list_champ(champion_t *new, champion_t **list);
int get_spe_value(char **map_byte, champion_t *actu, int i, int *next);
int get_value(char **map_byte, champion_t *actu, int i, int *next);
champion_t *live_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *sti_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *fork_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *lld_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *lldi_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *lfork_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *ldi_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *zjmp_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *xor_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *or_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *and_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *sub_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *add_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *st_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *ld_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *aff_fct(char *map, champion_t *champion, champion_t *actu);
champion_t *put_all_live_to_zero(champion_t *new);
champion_t *tack_off_cycle(champion_t *new);
champion_t *exec_inst(char *ram, champion_t *new, action_t *action);
int get_nb_live(champion_t *new);
int check_alive(champion_t *new);
#endif
