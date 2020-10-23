/*
** EPITECH PROJECT, 2019
** sqdd
** File description:
** qsd
*/

#include "../../include/corewar/corewar.h"

action_t *next_init(action_t *new)
{
    new[8].inst = op_tab[8].code;
    new[8].exec = &zjmp_fct;
    new[9].inst = op_tab[9].code;
    new[9].exec = &ldi_fct;
    new[10].inst = op_tab[10].code;
    new[10].exec = &sti_fct;
    new[11].inst = op_tab[11].code;
    new[11].exec = &fork_fct;
    new[12].inst = op_tab[12].code;
    new[12].exec = &lld_fct;
    new[13].inst = op_tab[13].code;
    new[13].exec = &lldi_fct;
    new[14].inst = op_tab[14].code;
    new[14].exec = &lfork_fct;
    new[15].inst = op_tab[15].code;
    new[15].exec = &aff_fct;
    new[16].inst = -1;
    new[16].exec = NULL;
    return (new);
}

action_t *init_action(void)
{
    action_t *new = malloc(sizeof(*new) * 17);

    new[0].inst = op_tab[0].code;
    new[0].exec = &live_fct;
    new[1].inst = op_tab[1].code;
    new[1].exec = &ld_fct;
    new[2].inst = op_tab[2].code;
    new[2].exec = &st_fct;
    new[3].inst = op_tab[3].code;
    new[3].exec = &add_fct;
    new[4].inst = op_tab[4].code;
    new[4].exec = &sub_fct;
    new[5].inst = op_tab[5].code;
    new[5].exec = &and_fct;
    new[6].inst = op_tab[6].code;
    new[6].exec = &or_fct;
    new[7].inst = op_tab[7].code;
    new[7].exec = &xor_fct;
    new = next_init(new);
    return (new);
}