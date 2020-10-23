/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** vm_instruction
*/

#include "../../include/corewar/corewar.h"
#define TO_HEX(i) (i <= 9 ? '0' + i : 'A' - 10 + i)

champion_t *sti_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[(actu->pc + 1) % MEM_SIZE]);
    char *map_byte[2] = {map, byte};
    int next = 3;
    int pc = actu->pc;
    int a = get_spe_value(map_byte, actu, 2, &next);
    int b = get_spe_value(map_byte, actu, 4, &next);
    int x = actu->reg[map[(actu->pc + 2) % MEM_SIZE] - 1];

    map[(pc + (a + b) % IDX_MOD) % MEM_SIZE] = (x & 0xff000000) >> 24;
    map[(pc + (a + b) % IDX_MOD + 1) % MEM_SIZE] = (x & 0x00ff0000) >> 12;
    map[(pc + (a + b) % IDX_MOD + 2) % MEM_SIZE] = (x & 0x0000ff00) >> 8;
    map[(pc + (a + b) % IDX_MOD + 3) % MEM_SIZE] = (x & 0x000000ff);
    actu->cycle += 25;
    actu->pc = (actu->pc + next) % MEM_SIZE;
    return (champion);
}

champion_t *fork_fct(char *map, champion_t *champion, champion_t *actu)
{
    int nb = map[actu->pc + 1] + map[(actu->pc + 2) % MEM_SIZE];
    champion_t *new = malloc(sizeof(*new));

    if (nb < 0)
        nb += 1;
    new->player = actu->player;
    new->pc = actu->pc + nb % IDX_MOD;
    new->cycle = 0;
    new->status = 1;
    new->live = 0;
    new->live_all = 0;
    new->reg = malloc(sizeof(int) * REG_NUMBER);
    for (int i = 0; i != REG_NUMBER; i++)
        new->reg[i] = actu->reg[i];
    new->name = actu->name;
    new->prog_size = actu->prog_size;
    new->next = NULL;
    put_in_list_champ(new, &champion);
    actu->cycle += 800;
    actu->pc = (actu->pc + 3) % MEM_SIZE;
    return (champion);
}

champion_t *lld_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[(actu->pc + 1) % MEM_SIZE]);
    int a = 0;
    int i = 0;
    int n = 4;
    int compt = 0;

    if (byte[0] == '1' && byte[1] == '0') {
        a = map[(actu->pc + 2) % MEM_SIZE] + map[(actu->pc + 3) % MEM_SIZE]
            + map[(actu->pc + 4) % MEM_SIZE] + map[(actu->pc + 5) % MEM_SIZE];
        n = 6;
    } else
        a = map[(actu->pc + 2) % MEM_SIZE] + map[(actu->pc + 3) % MEM_SIZE];
    while (i <= REG_SIZE) {
        compt = compt + map[(actu->pc + ((a + i))) % MEM_SIZE];
        i = i + 1;
    }
    actu->reg[map[(actu->pc + n) % MEM_SIZE]] = compt;
    actu->pc = (actu->pc + n + 1) % MEM_SIZE;
    actu->cycle += 10;
    return (champion);
}

champion_t *lldi_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[(actu->pc + 1) % MEM_SIZE]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int pc = actu->pc;
    int a = get_spe_value(map_byte, actu, 0, &next);
    int b = get_spe_value(map_byte, actu, 2, &next);
    int nb;

    nb = map[(pc + a) % MEM_SIZE] + map[(pc + a + 1) % MEM_SIZE] +
    map[(pc + a + 2) % MEM_SIZE] + map[(pc + a + 3) % MEM_SIZE];
    nb += b;
    a = nb;
    nb = map[(pc + a) % MEM_SIZE] + map[(pc + a + 1) % MEM_SIZE] +
    map[(pc + a + 2) % MEM_SIZE] + map[(pc + a + 3) % MEM_SIZE];
    actu->cycle += 50;
    actu->reg[map[(actu->pc + next) % MEM_SIZE] - 1] = nb;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}

champion_t *lfork_fct(char *map, champion_t *champion, champion_t *actu)
{
    int nb = map[actu->pc + 1] + map[(actu->pc + 2) % MEM_SIZE];
    champion_t *new = malloc(sizeof(*new));

    if (nb < 0)
        nb += 1;
    new->player = actu->player;
    new->pc = actu->pc + nb;
    new->cycle = 0;
    new->status = 1;
    new->live = 0;
    new->live_all = 0;
    new->reg = malloc(sizeof(int) * REG_NUMBER);
    for (int i = 0; i != REG_NUMBER; i++)
        new->reg[i] = actu->reg[i];
    new->name = actu->name;
    new->prog_size = actu->prog_size;
    new->next = NULL;
    put_in_list_champ(new, &champion);
    actu->cycle += 1000;
    actu->pc = (actu->pc + 3) % MEM_SIZE;
    return (champion);
}

