/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** main of the program
*/

#include "./../include/my.h"
#include "./../include/bootstrap.h"
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Arguments error !\n", 18);
        return (0);
    }
    bsq(av[1]);
    return (0);
}
