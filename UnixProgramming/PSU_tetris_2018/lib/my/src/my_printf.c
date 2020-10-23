/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** reproduce the behavior of _printf_
*/

#include "./../include/my.h"
#include <stdlib.h>

int my_printf(char *str, ...)
{
    va_list ap;

    if (str == NULL) {
        my_putstr("(null)\n");
    } else {
        va_start(ap, str);
        disp_stdarg(str, ap);
        va_end(ap);
    }
    return (0);
}