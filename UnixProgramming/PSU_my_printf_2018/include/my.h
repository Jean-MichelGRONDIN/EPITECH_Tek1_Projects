/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018 my.h
** File description:
** Prototypes of all function in libmy.a
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>

typedef struct my_printf_patterns {
    char pattern;
    char character;
} pattern_t;

int find_nb_max_char(int nb);
void    convert_to_maj_hexadec_base(unsigned int nb);
void    convert_to_hexadec_base(unsigned int nb);
void    converte_to_binary_base(int nb);
char    match_the_pattern(char pattern);
void    display(va_list ap, char pattern);
int is_this_a_pattern(char c);
void    converte_to_oct_base(int nb, int slash);
void    even_non_printable_char(char *str);
pattern_t    *initialise_pattern_table(int i, int i_tab);
int my_printf(char *str, ...);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *str, va_list ap);

void    my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char    *my_strdup(char const *src);
char    *my_revstr(char *str);

#endif /* MY_H */
