/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** give an aleatory number between two numbers
*/

#include "./../include/runner.h"

int nb_alea(int a, int b)
{
    int nb = 0;

    srand(time(NULL));
    nb = rand() % (b - a) + a;
    return (nb);
}
