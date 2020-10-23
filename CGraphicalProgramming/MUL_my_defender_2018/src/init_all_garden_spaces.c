/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init all garden spaces and place them into list
*/

#include "./../include/defender.h"

list_t  *init_all_gardens_spaces(list_t *list)
{
    int width = 530;
    int height = 200;

    while (height < 700) {
        while (width < 1260) {
            list = add_this_garden(list, height, width);
            width = width + 85;
        }
        width = 530;
        height = height + 100;
    }
    return (list);
}