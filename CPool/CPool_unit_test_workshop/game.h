/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#ifndef __GAME_H__
#define __GAME_H__

typedef struct person {
    char *name;
    int hp;
    int atk;
    int def;
} t_perso;

t_perso create_perso(char *name , int hp, int atk, int def);

#endif
