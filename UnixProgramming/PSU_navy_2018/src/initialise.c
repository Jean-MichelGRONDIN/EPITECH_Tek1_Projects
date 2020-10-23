/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** init map, pid and everything else
*/

#include "./../include/navy.h"

void    init_global(void)
{
    data.pid = -1;
    data.a = 0;
    data.b = 0;
    data.activate = -1;
}

int initialise(int ac, char **av)
{
    int return_value = 0;
    char    **map = NULL;

    init_global();
    init_basic_sigaction_usr_1();
    if (ac == 2)
        map = load_map(av[1]);
    else
        map = load_map(av[2]);
    return_value = return_value + map_errors(map);
    if (ac == 3) {
        data.pid = my_getnbr(av[1]);
        return_value = return_value + pid_errors();
    }
    if (return_value != 0)
        return (84);
    my_printf("my_pid: %i\n", getpid());
    return (launch_game(ac, map));
}
