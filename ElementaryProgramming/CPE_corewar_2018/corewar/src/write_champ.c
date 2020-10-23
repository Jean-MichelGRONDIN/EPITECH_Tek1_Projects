/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** qsd
*/

#include "../../include/corewar/corewar.h"

champion_t *init_champ(char *cor, int p, char *ram, int pla)
{
    int fd = open(cor, O_RDONLY);
    champion_t *new = malloc(sizeof(champion_t));
    header_t lol;

    read(fd, &lol, sizeof(lol));
    new->player = pla;
    new->pc = p;
    new->cycle = 0;
    new->status = 1;
    new->reg = malloc(sizeof(int) * REG_NUMBER);
    my_memset((char *)new->reg, 0, sizeof(int) * REG_NUMBER);
    new->reg[0] = pla;
    new->name = my_strdup(lol.prog_name);
    new->prog_size = lol.prog_size;
    new->live_all = 0;
    new->live = 1;
    new->next = NULL;
    for (; read(fd, &ram[p], 1); p++);
    close(fd);
    return (new);
}

void put_in_list_champ(champion_t *new, champion_t **list)
{
    champion_t *index = *list;

    if (*list == NULL) {
        *list = new;
        return;
    }
    while (index->next != NULL)
        index = index->next;
    index->next = new;
}

int get_ii(champ_arg_list_t *list, int i)
{
    int ii;

    ii = i;
    if (list->prog_adress != -1)
        ii = list->prog_adress - 1;
    return (ii);
}

int get_pp(champ_arg_list_t *list, int p)
{
    int pp;

    pp = p;
    if (list->prog_number != -1)
        pp = list->prog_number;
    return (pp);
}

champion_t *get_ram(champ_arg_list_t *list, int *pos, char *ram)
{
    int i = 0;
    int nb;
    int c;
    int p = 0;
    int ii = 0;
    int pp = 0;
    champ_arg_list_t *save = list;
    champion_t *new = NULL;

    for(; list; list = list->next)
        nb++;
    c = MEM_SIZE / nb;
    for (list = save; list; i++) {
        ii = get_ii(list, i);
        pp = get_pp(list, p);
        put_in_list_champ(init_champ(list->name, pp, ram, ii), &new);
        p += c;
        list = list->next;
    }
    return (new);
}