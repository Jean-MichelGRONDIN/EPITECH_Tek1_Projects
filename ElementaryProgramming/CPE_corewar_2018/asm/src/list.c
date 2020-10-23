/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** list of global list
*/

#include "asm.h"

const   check_list_t    check_rigor_list[] =
{
    {0, &check_instructions},
    {0, &check_called_label},
    {0, &check_comment},
    {0, &check_name},
    {-1, NULL}
};