/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** connect to the ennemy and return failed, sucess or time out
*/

#include "./../include/navy.h"

int connect_to_enemy(int ac)
{
    int res = 0;

    if (ac == 2)
        res = first_player();
    else
        res = second_player();
    data.a = 0;
    data.b = 0;
    return (res);
}
