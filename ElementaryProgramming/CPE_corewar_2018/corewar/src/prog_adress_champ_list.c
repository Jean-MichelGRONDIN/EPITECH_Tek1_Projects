/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** proog_adress_champ_list
*/

#include "../../include/corewar/corewar.h"

int get_prog_adress_arg_champ_list_value(champ_arg_list_t *list,
int ac, char **av, int *index)
{
    int after = *index + 1;

    if (*index >= ac) {
        *index = -1;
        return (-1);
    }
    if (my_strcmp(av[*index], "-a") != 0)
        return (-1);
    if (after >= ac) {
        *index = -1;
        return (-1);
    }
    if (my_str_is_int(av[after]) == 0) {
        my_pstrerr("Programe adress must be an integer !\n");
        *index = -1;
        list = free_arg_champ_list(list);
        return (-1);
    }
    return (my_getnbr(av[after]));
}

champ_arg_list_t    *prog_adress_pt_two(champ_arg_list_t *list,
int ac, char **av, int *index)
{
    int res = 0;
    char    *prog = NULL;
    int after = *index + 1;

    *index = *index + 2;
    res = get_prog_number_arg_champ_list_value(list, ac, av, index);
    if (res != -1 && *index != -1)
        *index = *index + 2;
    else if (*index == -1)
        return (free_arg_champ_list(list));
    prog = get_next_prog_name(ac, av, index);
    if (prog == NULL) {
        my_pstrerr("Error this option is not linked to an file !\n");
        *index = -1;
        return (free_arg_champ_list(list));
    }
    list = add_to_arg_champ_list(prog, res, my_getnbr(av[after]), list);
    *index = *index + 1;
    return (list);
}

champ_arg_list_t    *prog_adress_arg_champ_list(champ_arg_list_t *list,
int ac, char **av, int *index)
{
    int after = *index + 1;

    if (after >= ac) {
        my_pstrerr("No info for prog adress");
        *index = -1;
        list = free_arg_champ_list(list);
        return (list);
    } else if (my_str_is_int(av[after]) == 0) {
        my_pstrerr("Programe adress rmust be an integer !\n");
        *index = -1;
        list = free_arg_champ_list(list);
        return (list);
    }
    return (prog_adress_pt_two(list, ac, av, index));
}