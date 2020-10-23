/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** initialise this from arguments
*/

#include "./../include/generator.h"

int initialise_size(char **av, int perfect)
{
    int x = 0;
    int y = 0;

    if (my_str_is_int(av[1]) == 1 && my_str_is_int(av[2]) == 1) {
        x = atoi(av[1]);
        y = atoi(av[2]);
    } else {
        my_pstrerr("Error args must be integers !\n");
        return (84);
    }
    generate_maze(x, y, perfect);
    return (0);
}
