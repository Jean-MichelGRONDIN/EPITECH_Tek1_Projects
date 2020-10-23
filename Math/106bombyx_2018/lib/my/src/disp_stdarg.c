/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootstrap_2018
** File description:
** function disp_stdarg
*/

#include <stdarg.h>
#include "./../include/my.h"

char    match_the_pattern(char pattern)
{
    pattern_t *tab = initialise_pattern_table(0, 0);
    int i  = 0;
    char    c = '~';

    while (tab[i].pattern != '~') {
        if (tab[i].pattern == pattern) {
            c = tab[i].character;
        }
        i = i + 1;
    }
    return (c);
}

void     display(va_list ap, char pattern)
{
    if (pattern == 'c')
        my_putchar((char) va_arg(ap, int));
    if (pattern == 'i')
        my_put_nbr(va_arg(ap, int));
    if (pattern == 's')
        my_putstr(va_arg(ap, char *));
    if (pattern == 'b')
        converte_to_binary_base(va_arg(ap, int));
    if (pattern == 'o')
        converte_to_oct_base(va_arg(ap, int), 0);
    if (pattern == 'S')
        even_non_printable_char(va_arg(ap, char *));
    if (pattern == 'x')
        convert_to_hexadec_base(va_arg(ap, int));
    if (pattern == 'X')
        convert_to_maj_hexadec_base(va_arg(ap, int));
    if (pattern == '%')
        my_putchar('%');
}

int is_this_a_pattern(char c)
{
    pattern_t *tab = initialise_pattern_table(0, 0);
    int i = 0;

    while (tab[i].pattern != '~') {
        if (tab[i].pattern == c) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}

int disp_stdarg(char *str, va_list ap)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '%' && is_this_a_pattern(str[i + 1]) == 1) {
            display(ap, match_the_pattern(str[i + 1]));
            i = i + 2;
        } else {
            my_putchar(str[i]);
            i = i + 1;
        }
    }
    return (0);
}
