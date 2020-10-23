/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check if there is invalid pos in this line
*/

#include "./../include/navy.h"

int check_map_invalid_pos(char **line)
{
    if (my_strtab_len(line) != 3 || my_strlen(line[0]) != 1) {
        my_pstrerr("Wrong ship number or/and number of ships !\n");
        return (1);
    }
    if (my_strlen(line[1]) != 2 || my_strlen(line[2]) != 2) {
        my_pstrerr("Wrong position detected !\n");
        return (1);
    }
    if (line[1][0] < 'A' || line[1][0] > 'H' ||
        line[2][0] < 'A' || line[2][0] > 'H') {
        my_pstrerr("Wrong position in width detected !\n");
        return (1);
    }
    if (line[1][1] < '1' || line[1][1] > '8' ||
        line[2][1] < '1' || line[2][1] > '8') {
        my_pstrerr("Wrong position in height detected !\n");
        return (1);
    }
    return (0);
}
