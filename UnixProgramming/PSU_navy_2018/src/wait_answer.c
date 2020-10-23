/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** wait answer of enemy about our attack
*/

#include "./../include/navy.h"

int wait_answer(char *attack)
{
    int res = -1;

    pause();
    if (data.a == 1) {
        my_printf("%c%c: missed\n", attack[0] + 65, attack[1] + 48);
        res = 1;
    }
    if (data.b == 1) {
        my_printf("%c%c: hit\n", attack[0] + 65, attack[1] + 48);
        res = 2;
    }
    data.a = 0;
    data.b = 0;
    return (res);
}
