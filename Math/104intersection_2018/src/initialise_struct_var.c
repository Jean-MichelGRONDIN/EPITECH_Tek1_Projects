/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** initialise a struct var_t a return it
*/

#include "./../include/intersection.h"

var_t   *initialise_var_t(void)
{
    var_t   *var = malloc(sizeof(*var));

    var->a = 0;
    var->b = 0;
    var->c = 0;
    return (var);
}
