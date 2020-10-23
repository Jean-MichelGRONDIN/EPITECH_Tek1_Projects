/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** give an aleatory number between two numbers, b the higher
*/

#include "./../include/match.h"

int nb_alea(int a, int b)
{
    int nb = 0;

    b = b + 1;
    srandom(time(NULL));
    nb = random() % (b - a) + a;
    return (nb);
}
