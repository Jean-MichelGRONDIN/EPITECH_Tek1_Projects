/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** corewar_list
*/

#include "../../include/corewar/corewar.h"

const   check_arg_champ_t    arg_champ_list[] =
{
    {0, "-dump", &dump_arg_champ_list},
    {0, "-n", &prog_number_arg_champ_list},
    {0, "-a", &prog_adress_arg_champ_list},
    {-1, NULL, NULL}
};