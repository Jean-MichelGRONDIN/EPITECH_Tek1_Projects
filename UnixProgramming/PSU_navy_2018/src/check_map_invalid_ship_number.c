/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check if valid ship number and check double same ship
*/

#include "./../include/navy.h"

int check_map_invalid_ship_number(char **map)
{
    char    *ships_value = NULL;

    if (my_strtab_len(map) != 4) {
        my_pstrerr("Error wrong number of ships !\n");
        return (1);
    }
    ships_value = load_ships_value(map);
    if (check_two_time_same_ships(ships_value) != 0)
        return (1);
    return (0);
}
