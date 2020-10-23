/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** wait input from enemy
*/

#include "./../include/navy.h"

int wait_an_input(void)
{
    int res = 0;

    while (res == 0) {
        while (data.b != 2) {
            pause();
        }
        res = data.a;
    }
    data.b = 0;
    data.a = 0;
    return (res);
}
