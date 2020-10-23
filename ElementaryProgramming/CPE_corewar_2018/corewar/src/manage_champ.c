/*
** EPITECH PROJECT, 2019
** qs
** File description:
** dqsd
*/

#include "../../include/corewar/corewar.h"

int check_alive(champion_t *new)
{
    int nb_alive = 0;
    int save;

    for(; new; new = new->next) {
        if (new->live > 0 && new->player != save) {
            nb_alive++;
            save = new->player;
        } else
            new->status = -1;
    }
    return (nb_alive);
}

int get_nb_live(champion_t *new)
{
    int i = 0;
    int res = 0;

    for(; new; new = new->next)
        res += new->live_all;
    return (res);
}

champion_t *exec_inst(char *ram, champion_t *new, action_t *action)
{
    int i = 0;
    champion_t *save = new;

    while (new) {
        i = 0;
        while (action[i].inst != -1 && action[i].inst != ram[new->pc])
            i++;
        if (action[i].inst != -1 && new->cycle == 0) {
            save = action[i].exec(ram, save, new);
        }
        new = new->next;
    }
    new = save;
    return (new);
}

champion_t *tack_off_cycle(champion_t *new)
{
    champion_t *save = new;

    for (; new; new = new->next) {
        new->cycle--;
    }
    new = save;
    return (new);
}

champion_t *put_all_live_to_zero(champion_t *new)
{
    champion_t *save = new;

    for (; new; new = new->next)
        new->live = 0;
    new = save;
    return (new);
}