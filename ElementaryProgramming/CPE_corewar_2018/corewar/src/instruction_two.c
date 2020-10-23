/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** vm_instruction
*/

#include "../../include/corewar/corewar.h"

champion_t *and_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[actu->pc + 1]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int a = get_value(map_byte, actu, 0, &next);
    int b = get_value(map_byte, actu, 2, &next);

    actu->reg[map[actu->pc + next] - 1] = a & b;
    actu->cycle += 6;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}

champion_t *or_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[actu->pc + 1]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int a = get_value(map_byte, actu, 0, &next);
    int b = get_value(map_byte, actu, 2, &next);

    actu->reg[map[actu->pc + next] - 1] = a | b;
    actu->cycle += 6;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}

champion_t *xor_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[actu->pc + 1]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int a = get_value(map_byte, actu, 0, &next);
    int b = get_value(map_byte, actu, 2, &next);

    actu->reg[map[actu->pc + next] - 1] = a ^ b;
    actu->cycle += 6;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}

champion_t *zjmp_fct(char *map, champion_t *champion, champion_t *actu)
{
    int nb = map[actu->pc + 1] + map[actu->pc + 2];

    if (nb < 0)
        nb = nb + 1;
    actu->pc = actu->pc + (nb % IDX_MOD);
    actu->cycle += 20;
    return (champion);
}

champion_t *ldi_fct(char *map, champion_t *champion, champion_t *actu)
{
    char *byte = convert_10_2(map[actu->pc + 1]);
    char *map_byte[2] = {map, byte};
    int next = 2;
    int pc = actu->pc;
    int a = get_spe_value(map_byte, actu, 0, &next);
    int b = get_spe_value(map_byte, actu, 2, &next);
    int nb;

    nb = map[pc + a % IDX_MOD] + map[pc + a % IDX_MOD + 1] +
    map[pc + a % IDX_MOD + 2] + map[pc + a % IDX_MOD + 3];
    nb += b;
    a = nb;
    nb = map[pc + a % IDX_MOD] + map[pc + a % IDX_MOD + 1] +
    map[pc + a % IDX_MOD + 2] + map[pc + a % IDX_MOD + 3];
    actu->cycle += 25;
    actu->reg[map[actu->pc + next] - 1] = nb;
    actu->pc = (actu->pc + next + 1) % MEM_SIZE;
    return (champion);
}