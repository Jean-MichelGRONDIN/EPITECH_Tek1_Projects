/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** load_avm_args
*/

#include "../../include/corewar/corewar.h"

champ_arg_list_t    *check_this_param(champ_arg_list_t *list,
int ac, char **av, int *index)
{
    int i = 0;

    while (arg_champ_list[i].n != -1) {
        if (my_strcmp(av[*index], arg_champ_list[i].opt_str) == 0)
            return (arg_champ_list[i].check(list, ac, av, index));
        i = i + 1;
    }
    if (av[*index][0] == '-') {
        my_pstrerr("Error wrong option detected !\n");
        list = free_arg_champ_list(list);
        *index = -1;
        return (list);
    }
    list = add_to_arg_champ_list(av[*index], -1, -1, list);
    *index = *index + 1;
    return (list);
}

champ_arg_list_t    *load_champ_args(int ac, char **av)
{
    champ_arg_list_t    *list = NULL;
    int i = 1;
    int end = 0;

    while (i != ac && end == 0) {
        list = check_this_param(list, ac, av, &i);
        if (i == -1)
            end = 1;
    }
    if (list == NULL)
        my_pstrerr("Errors no champ detected !\n");
    else if (list->next == NULL) {
        my_pstrerr("Error we must have at minimum 2 champion to launch !\n");
        list = free_arg_champ_list(list);
    }
    return (list);
}