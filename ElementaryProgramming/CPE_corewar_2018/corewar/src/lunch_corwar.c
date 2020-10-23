/*
** EPITECH PROJECT, 2019
** dqs
** File description:
** qsdd
*/

#include "../../include/corewar/corewar.h"

void end(champion_t *new)
{
    while (new && new->live == 0)
        new = new->next;
    if (new)
        my_printf("The player %i(%s) has won.\n", new->player, new->name);
}

int lunche_corwar(champion_t *new, char *ram)
{
    int cycle = 0;
    int cycle_to_die = CYCLE_TO_DIE + 5;
    int nb_live = 0;
    action_t *action = init_action();

    while (1) {
        nb_live = get_nb_live(new);
        if ((nb_live % NBR_LIVE) == 0)
            cycle_to_die -= CYCLE_DELTA;
        if ((cycle >= cycle_to_die
            && check_alive(new) <= 1) || cycle_to_die <= 0)
            break;
        if (cycle == cycle_to_die) {
            new = put_all_live_to_zero(new);
            cycle = 0;
        }
        new = exec_inst(ram, new, action);
        cycle++;
        new = tack_off_cycle(new);
    }
    end(new);
}
