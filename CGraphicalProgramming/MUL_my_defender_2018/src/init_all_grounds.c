/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init background and gardens for the game
*/

#include "./../include/defender.h"

list_t  *init_all_grounds(void)
{
    obj_t   *back = init_this_background("./assets/map_defender.png");
    list_t  *list = add_obj_to_list(back, NULL);

    list = init_all_gardens_spaces(list);
    return (list);
}