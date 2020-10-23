/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** check that the maps conditiosn are respected
*/

#include "./../include/runner.h"

int check_18_first_char(char *map)
{
    int i = 1;

    if (map[0] != '#') {
        write(2, "The first character must be '#' !\n", 34);
        return (0);
    }
    while (i != 18) {
        if (map[i] != ' ') {
            write(2, "The first 18 characters must be spaces !\n", 41);
            return (0);
        }
        i = i + 1;
    }
    return (1);
}

int check_if_there_is_not_second_too_close(char c, char *map, int i)
{
    int i_two = i;
    if (c == ' ') {
        return (1);
    }
    i_two = i_two + 1;
    while (map[i_two] != '\0' && i_two < (i + 20) && map[i_two] != c) {
        i_two = i_two + 1;
    }
    if (i_two < (i + 20) && map[i_two] == c){
        write(2, "Two same obstacles too close !\n", 31);
        return (0);
    }
    return (1);
}

int check_char_by_char(char *map)
{
    int i = 18;
    int nb = 0;

    while (map[i] != '\0') {
        if (my_is_in(map[i], " 0123456789") == 0) {
            write(2, "Wrong characters please read the .legend !\n", 43);
            return (0);
        }
        if (check_if_there_is_not_second_too_close(map[i], map, i) == 0) {
            return (0);
        }
        if (my_is_in(map[i], "0123456789") == 1)
            nb = nb + 1;
        i = i + 1;
    }
    if (nb == 0) {
        write(2, "You must have obstacles !\n", 26);
        return (0);
    }
    return (1);
}

int check_map_conditions(char *map)
{
    if (my_strlen(map) > 400 || my_strlen(map) < 20) {
        write(2, "Wrong map size !\n", 17);
        return (0);
    }
    if (check_18_first_char(map) == 0) {
        return (0);
    }
    if (check_char_by_char(map) == 0) {
        return (0);
    }
    return (1);
}
