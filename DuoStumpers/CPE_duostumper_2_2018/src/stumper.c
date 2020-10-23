/*
** EPITECH PROJECT, 2019
** CPE_duostumper_2_2018
** File description:
** first function called
*/

#include "./../include/stumper.h"

int stumper(int ac, char **av)
{
    game_t  *game = NULL;

    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            my_printf("Stil not done !\n");
//            disp_usage();
            return (0);
        }
    if ((game = load_check_game(ac, av)) == NULL)
        return (84);
    return (game_loop(game));
}
