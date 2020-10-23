/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** check if there are the right number of objects
*/

#include "./../include/sokoban.h"

void    check_nb_of_p(char *str)
{
    int i  = 0;
    int nb_p = 0;

    while (str[i] != 0) {
        if (str[i] == 'P') {
            nb_p = nb_p + 1;
        }
        i = i + 1;
    }
    if (nb_p != 1) {
        write(2, "WRONG number of players !\n", 26);
        exit(84);
    }
}

void    check_nb_errors(int x, int o)
{
    if (x != o) {
        write(2, "WRONG number of x and o !\n", 26);
        exit(84);
    }
}

void    check_objects_errors(world_t *world)
{
    check_nb_of_p(world->str);
    check_nb_errors(world->nb_x, world->nb_o);
}
