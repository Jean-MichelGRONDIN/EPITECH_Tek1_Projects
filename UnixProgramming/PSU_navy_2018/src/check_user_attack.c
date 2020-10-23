/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check that the user input is right
*/

#include "./../include/navy.h"

int check_user_attack(char *str)
{
    if (str == NULL) {
        return (0);
    }
    if (my_strlen(str) != 2) {
        my_pstrerr("Wrong position\n");
        return (0);
    }
    my_printf("[%c][%c]\n", str[0], str[1]);
    if (str[0] < 'A' || str[0] > 'H') {
        my_pstrerr("Wrong position\n");
        return (0);
    }
    if (str[1] < '1' || str[1] > '8') {
        my_pstrerr("Wrong position\n");
        return (0);
    }
    return (1);
}
