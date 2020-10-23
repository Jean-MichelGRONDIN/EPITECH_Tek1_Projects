/*
** EPITECH PROJECT, 2019
** CPE_solostumper_2_2018
** File description:
** header of the project
*/

#ifndef __SOLO_H__
#define __SOLO_H__

#include "./my.h"
#include <unistd.h>

int find_nb_of_this_char_in_str(char c, char *str);
int check_how_many_of_this_char_in_both(char c, char *one, char *two);
int try_to_find_anagrams(char *one, char *two);
void    start_the_research_of_anagrams(char **av);
int anagram(int ac, char **av);

#endif
