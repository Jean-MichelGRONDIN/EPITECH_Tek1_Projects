/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check if the is 2 time the same ships
*/

#include "./../include/navy.h"

int check_if_there_is_again_the_same(char *ships, int pos)
{
    int i = pos + 1;

    while (ships[i] != '\0') {
        if (ships[i] == ships[pos])
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_two_time_same_ships(char *ships)
{
    int i = 0;

    while (ships[i] != '\0') {
        if (check_if_there_is_again_the_same(ships, i) == 1) {
            my_pstrerr("Error there is 2 time the same ships !\n");
            return (1);
        }
        if (ships[i] < 2 || ships[i] > 5) {
            my_pstrerr("Error wrong ship number !\n");
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
