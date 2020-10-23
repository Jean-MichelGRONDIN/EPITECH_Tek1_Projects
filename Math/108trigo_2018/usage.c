/*
** EPITECH PROJECT, 2019
** 108trigo
** File description:
** usage
*/

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

void disp_usage(void)
{
    printf("USAGE\n");
    printf("    ./108trigo fun a0 a1 a2 ...\n\n");
    printf("DESCRIPTION\n");
    printf("    fun     function to be applied, among at least \"EXP\",
 \"COS\", \"SIN\", \"COSH\"\n            and \"SINH\"\n");
    printf("    ai      coeficients of the matrix\n");
}
