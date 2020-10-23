/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** turn of the user, get input then seend it then wait answer
*/

#include "./../include/navy.h"

char    **my_turn(char **map)
{
    char    *attack = get_user_attack();
    char    res = 0;

    if (attack == NULL) {
        map = free_cleanly_str_tab(map);
        return (map);
    }
    attack[0] = attack[0] - 65;
    attack[1] = attack[1] - 48;
    my_printf("[%i][%i]", attack[0], attack[1]);
    send_this_to_enemy(attack[0]);
    send_this_to_enemy(attack[1]);
    res = wait_answer(attack);
    map = update_enemy_map(map, attack, res);
    attack = free_cleanly_this_str(attack);
    return (map);
}
