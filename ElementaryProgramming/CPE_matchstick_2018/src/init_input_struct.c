/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** init a structure input_t
*/

#include "./../include/match.h"

input_t *init_input_struct(int number, int row)
{
    input_t    *input = malloc(sizeof(*input));

    input->rows = row;
    input->nb = number;
    return (input);
}
