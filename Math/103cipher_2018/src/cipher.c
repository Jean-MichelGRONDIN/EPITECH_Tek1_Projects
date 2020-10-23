/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** first function
*/

#include "./../include/cipher.h"

void    cipher(int ac, char **av)
{
    if (ac == 2) {
        if (strcmp(av[1], "-h") == 0) {
            disp_usage();
            exit(0);
        }
    }

    if (ac < 3) {
        exit(84);
    }
    initialise_matrix(ac, av);
}
