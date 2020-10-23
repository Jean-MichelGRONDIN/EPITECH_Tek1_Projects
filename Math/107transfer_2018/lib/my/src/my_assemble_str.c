/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_2018
** File description:
** put a string in the end of an other malloced string
*/

#include <stdlib.h>
#include "./../include/my.h"

char    *my_assemble_str(char *one, char *two)
{
    int lenght = my_strlen(one) + my_strlen(two);
    char    *tmp = malloc(sizeof(char) * (lenght + 1));
    int i = 0;
    int i_two = 0;

    tmp[lenght] = '\0';
    while (one[i] != '\0') {
        tmp[i] = one[i];
        i = i + 1;
    }
    while (two[i_two] != '\0') {
        tmp[i] = two[i_two];
        i = i + 1;
        i_two = i_two + 1;
    }
    return (tmp);
}
