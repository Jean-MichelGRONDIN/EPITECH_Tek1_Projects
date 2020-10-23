/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** vm_instruction
*/

#include "corewar.h"

champion_t *aff_fct(char *map, champion_t *champion, champion_t *actu)
{
    my_printf("%c\n", actu->reg);
    actu->cycle += 2;
    return (champion);
}
