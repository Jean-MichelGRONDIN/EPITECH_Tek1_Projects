/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** vm_instruction
*/

#include "corewar.h"

champion_t *live_fct(char *map, champion_t *champion, champion_t *actu)
{
    int i = 0;
    champion_t *save = champion;
    int nb = map[actu->pc + 1];

    actu->cycle += 10;
    nb = nb + map[(actu->pc + 2) % MEM_SIZE] + map[(actu->pc + 3) % MEM_SIZE];
    nb = nb + (map[(actu->pc + 4) % MEM_SIZE]);
    while (save != NULL && save->player != nb)
        save = save->next;
    if (save == NULL)
        return (champion);
    for (; save != NULL; save = save->next)
        if (save->player == nb) {
            my_printf("The player %i(%s) is alive.\n",
            save->player, save->name);
            save->live += 1;
            save->live_all += 1;
        }
    actu->pc = (actu->pc + 5) % MEM_SIZE;
    return (champion);
}

champion_t *ld_fct(char *map, champion_t *champion, champion_t *actu)
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
        compt = compt + map[(actu->pc + ((a + i) % IDX_MOD)) % MEM_SIZE];
        i = i + 1;
    }
    actu->reg[map[(actu->pc + n) % MEM_SIZE]] = compt;
    actu->pc = (actu->pc + n + 1) % MEM_SIZE;
    actu->cycle += 5;
    return (champion);
}

champion_t *st_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[(actu->pc + 1) % MEM_SIZE]);
    int a =  actu->reg[map[(actu->pc + 2) % MEM_SIZE] - 1];
    int i = 0;
    int n = 2;
    int pc = actu->pc;

    if (byte[2] == '1' && byte[3] == '1') {
        i = map[(pc + 3) % IDX_MOD] + map[(pc + 4) % IDX_MOD];
        map[(pc + i) % IDX_MOD] = a;
        n = 4;
    }
    else {
        actu->reg[map[(pc + 3) % IDX_MOD] - 1] = a;
        n = 3;
    }
    actu->pc = (actu->pc + n + 1) % MEM_SIZE;
    actu->cycle += 5;
    return (champion);
}


champion_t *add_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[(actu->pc + 1) % MEM_SIZE]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int a = get_value(map_byte, actu, 0, &next);
    int b = get_value(map_byte, actu, 2, &next);

    actu->reg[map[(actu->pc + next) % MEM_SIZE] - 1] = a + b;
    actu->cycle += 10;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}

champion_t *sub_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[(actu->pc + 1) % MEM_SIZE]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int a = get_value(map_byte, actu, 0, &next);
    int b = get_value(map_byte, actu, 2, &next);

    actu->cycle += 10;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}