/*
** EPITECH PROJECT, 2018
** PSU_bootstrap_my_printf_2018
** File description:
** principal file of sum_stdarg
*/

#include <stdarg.h>
#include "./../include/my.h"
#include <stddef.h>

int sum_stdarg(int i, int nb, ...)
{
    va_list ap;
    int index = 0;
    int res = 0;

    va_start(ap, nb);
    if (i == 0) {
        while (index != nb) {
            res = res + va_arg(ap, int);
            index = index + 1;
        }
    }
    if (i == 1) {
        while (index != nb) {
            res = res + my_strlen(va_arg(ap, char *));
            index = index + 1;
        }
    }
    va_end(ap);
    return (res);
}
