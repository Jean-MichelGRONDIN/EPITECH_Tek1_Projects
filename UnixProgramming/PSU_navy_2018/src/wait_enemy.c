/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** wait ennemy attack, and then answer if hit or missed
*/

#include "./../include/navy.h"

char    **wait_enemy(char **map)
{
    char    *data = malloc(sizeof(char) * (2 + 1));
    char    res = 0;

    data[2] = '\0';
    my_putstr("\nwaiting for enemy’s attack...\n");
    data[0] = wait_an_input();
    data[1] = wait_an_input();
    res = check_if_touched(map, data);
    answer_the_enemy(res);
    map = update_my_map(map, data);
    data = free_cleanly_this_str(data);
    return (map);
}
