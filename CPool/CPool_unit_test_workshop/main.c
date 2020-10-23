/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include "./game.h"

t_perso create_perso(char *name , int hp, int atk, int def)
{
    t_perso p;

    p.name = name;
    p.hp = hp;
    p.atk = atk;
    p.def = def;
    return (p);
}
