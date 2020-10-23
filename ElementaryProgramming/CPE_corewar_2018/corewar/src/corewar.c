/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** first function called
*/

#include "../../include/corewar/corewar.h"

void corewar_next(champ_arg_list_t *list, char *ram)
{
    ram = malloc(sizeof(char) * MEM_SIZE);
    ram = my_memset(ram, 0, MEM_SIZE);
    champion_t *new = get_ram(list, NULL, ram);
    lunche_corwar(new, ram);
    free(ram);
}

int corewar(int ac, char **av)
{
    int dump = -1;
    champ_arg_list_t    *list;
    char *ram;

    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            disp_usage();
            return (0);
        }
    if (ac < 3) {
        my_pstrerr("Wrong umber of arguments !\n");
        return (84);
    }
    if ((dump = load_dump_cycle_opt(ac, av)) == -84)
        return (84);
    if ((list = load_champ_args(ac, av)) == NULL)
        return (84);
    corewar_next(list, ram);
    return (0);
}
