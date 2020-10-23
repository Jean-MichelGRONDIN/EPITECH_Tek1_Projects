/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** function aleatory
*/

#include <stdlib.h>
#include <time.h>

int nb_alea(int a, int b)
{
    int nb = 0;
    srand(time(NULL));
    nb = rand() % (b - a) + a;
    return (nb);
}
