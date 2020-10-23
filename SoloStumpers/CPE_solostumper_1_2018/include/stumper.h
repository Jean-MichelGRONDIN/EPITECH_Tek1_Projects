/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** includes of the prog
*/

#ifndef __STUMPER_H__
#define __STUMPER_H__

#include "./include.h"

typedef struct count_word {
    char    *word;
    int nb;
} count_word_t;

int stumper(int ac, char **av);

void    count_words(char *str);

#endif
