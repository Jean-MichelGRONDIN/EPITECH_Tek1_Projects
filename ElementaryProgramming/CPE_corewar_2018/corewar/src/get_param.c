/*
** EPITECH PROJECT, 2019
** qsdqsd
** File description:
** qds
*/

#include "../../include/corewar/corewar.h"

int get_value(char **map_byte, champion_t *actu, int i, int *next)
{
    int a = 0;
    char *map = map_byte[0];
    char *byte = map_byte[1];

    if (byte[i] == '0' && byte[i + 1] == '1') {
        a = actu->reg[map[actu->pc + *next] - 1];
        *next += 1;
    }
    if (byte[i] == '1' && byte[i + 1] == '0') {
        a = map[actu->pc + *next] + map[actu->pc + *next + 1] +
        map[actu->pc + *next + 2] + map[actu->pc + *next + 3];
        *next += 4;
    }
    if (byte[i] == '1' && byte[i + 1] == '1') {
        a = map[actu->pc + *next] + map[actu->pc + *next + 1];
        *next += 2;
    }
    return (a);
}

int get_spe_value(char **map_byte, champion_t *actu, int i, int *next)
{
    int a = 0;
    char *map = map_byte[0];
    char *byte = map_byte[1];

    if (byte[i] == '0' && byte[i + 1] == '1') {
        a = actu->reg[map[actu->pc + *next] - 1];
        *next += 1;
    }
    if (byte[i] == '1' && byte[i + 1] == '0') {
        a = map[actu->pc + *next] + map[actu->pc + *next + 1];
        *next += 2;
    }
    if (byte[i] == '1' && byte[i + 1] == '1') {
        a = map[actu->pc + *next] + map[actu->pc + *next + 1];
        *next += 2;
    }
    return (a);
}