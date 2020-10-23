/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** header of the project
*/

#ifndef __STUMPER_H__
#define __STUMPER_H__

#include "./include.h"

int put_that_in_crypt_file(char *str);

char uncrypt_that_char(char c, int nb);
char    *cipher(char *str, int nb);

int my_char_isalpha(char c);

char    *get_message_input(char **av);
int initialise(char **av);

int stumper(int ac, char **av);

#endif
