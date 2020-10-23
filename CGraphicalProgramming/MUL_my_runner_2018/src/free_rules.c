/*
** EPITECH PROJECT, 2019
** MUl_my_runner_2018
** File description:
** free rules vars
*/

#include "./../include/runner.h"

void    free_rules(rulers_t *rules)
{
    destroy_musics(rules);
    free(rules);
}
